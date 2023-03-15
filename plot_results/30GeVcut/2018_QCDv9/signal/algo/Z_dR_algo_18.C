#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.2426748,7.029799,1.779615);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.577386);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(1.577386);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.3599041);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.579361);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.680332);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.7636233);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.7030165);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.5692808);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.4717969);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.2931528);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.2180738);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.1741542);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.1008501);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.09634433);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.07516849);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.05241997);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01404592);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.004768091);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.002434505);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.004810331);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,0.003189074);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.03170625);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.04216877);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.04284874);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.06056193);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.04421998);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.04214842);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.0362848);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.02917434);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.02457416);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.02162103);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01636256);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.01586362);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.01387683);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.01172714);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.006400025);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.003222582);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.002434505);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.003402067);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,0.003189074);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.06853028);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.1824511);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.263788);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.2879674);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.2342792);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.1461036);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.07092086);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.04746457);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.03024688);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.02140189);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.01985694);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.01654276);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.01276153);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.01288462);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.007477962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001903679);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.003321009);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0009997441);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0002279979);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0004199154);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0003035629);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.005585183);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.008430517);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.01000546);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.01050017);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.009087748);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.007212089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.004957393);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.004093468);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.003212207);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.002714686);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.002641431);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.00241404);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.00212577);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.00211016);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.001649568);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0007401654);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.001117024);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0005772854);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0002279979);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0004199154);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0003035629);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
