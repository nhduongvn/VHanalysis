#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-0.02077236,1.171633,0.1523307);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",25,0,1);
   st_stack_122->SetMinimum(-2.249519e+09);
   st_stack_122->SetMaximum(-0.1515003);
   st_stack_122->SetDirectory(0);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->GetXaxis()->SetTitle("Sphericity");
   st_stack_122->GetXaxis()->SetRange(1,25);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetTitleOffset(1);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Event/0.04");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetTitleSize(0.037);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetTitleOffset(1);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.008887417);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.03076803);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.08265215);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.08798918);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.0867847);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.08535173);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.08799521);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.07888434);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.09167658);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.07771437);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.08135214);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.06437404);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.05080577);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.04658269);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.05116887);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.02658071);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.03469563);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.02539542);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.0199076);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.009786645);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,0.004368516);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,0.001471575);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.003456837);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.006851312);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01057085);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01111532);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.0109309);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01147865);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01088361);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.01061781);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.0110778);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.01013739);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.01087618);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.009281018);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.008807038);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.007931128);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.008457469);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.006406402);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.006900052);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.005823326);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.005345864);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.003735964);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,0.002522574);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,0.001471575);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.00252713);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.01285163);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.02297319);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.03250197);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.03323136);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.03512463);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.03566163);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.02876779);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.03691423);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.02736612);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.02859049);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.02247846);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.01970788);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.02066526);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.01485655);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.009467514);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.01051842);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.008146137);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.005030164);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.001068935);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.0009783387);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.0001939626);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0006492182);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.001497006);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.00198044);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.002380564);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002416372);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.00250769);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.002510058);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.002267288);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.002581909);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.002201212);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.002282109);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.001995825);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.001864443);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.001928379);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.001635919);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.001271504);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.001376205);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.001199171);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0009492192);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.0004415655);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.0004079965);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.0001939626);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
