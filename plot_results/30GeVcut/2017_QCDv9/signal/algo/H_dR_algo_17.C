#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.1412947,7.264125,1.036161);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9184155);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(0);
   st_stack_86->SetMaximum(0.9184155);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.04267962);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.1547853);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.2580466);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.3545274);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.3970136);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.4441919);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.44258);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.3763622);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.3586564);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.2961366);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.1916215);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.1539454);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.1033735);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.07166115);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.02079065);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.008130197);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.005530394);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.008040385);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.004215785);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.001823718);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,0.001696461);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,0.001968042);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,0.001758525);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.009288849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01725966);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.02203811);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.02637109);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02749193);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.02950344);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.02893431);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.02703066);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.02676557);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.023722);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01933934);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.01698609);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01393762);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01110202);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.006064396);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.003632046);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.003196029);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.003635324);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.002447902);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.001823718);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,0.001696461);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,0.001968042);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,0.001758525);
   VbbHcc_algo_H_dR_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.01452849);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.03743148);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.07040789);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.1232281);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1620956);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.1680851);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.1464139);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.09561552);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.06624442);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.04233018);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.03556452);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.02621133);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.02136343);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.02013759);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.009595726);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.003448685);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001786393);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.001207753);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.000180096);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0005020342);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,0.0002650135);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.00188077);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002974562);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.004080064);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005435465);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.006297937);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.006399917);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.005944414);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.004828709);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.003996434);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.003204072);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.002952685);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.002533767);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.002308023);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.002180561);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.00151398);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0009328244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0006575036);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0005450254);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.000180096);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003553898);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,0.0002650135);
   VbbHcc_algo_H_dR_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
