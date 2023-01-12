#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_18()
{
//=========Macro generated from canvas: Z_pt_both_18/Z_pt_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_both_18 = new TCanvas("Z_pt_both_18", "Z_pt_both_18",0,0,600,600);
   Z_pt_both_18->SetHighLightColor(2);
   Z_pt_both_18->Range(37.97653,-1.231127,1705.96,9.028264);
   Z_pt_both_18->SetFillColor(0);
   Z_pt_both_18->SetFillStyle(4000);
   Z_pt_both_18->SetBorderMode(0);
   Z_pt_both_18->SetBorderSize(2);
   Z_pt_both_18->SetLeftMargin(0.15709);
   Z_pt_both_18->SetRightMargin(0.1234783);
   Z_pt_both_18->SetBottomMargin(0.12);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.002325);
   
   TH1F *st_stack_123 = new TH1F("st_stack_123","",40,0,2000);
   st_stack_123->SetMinimum(0);
   st_stack_123->SetMaximum(8.002325);
   st_stack_123->SetDirectory(0);
   st_stack_123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_123->SetLineColor(ci);
   st_stack_123->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_123->GetXaxis()->SetRange(7,30);
   st_stack_123->GetXaxis()->SetLabelFont(42);
   st_stack_123->GetXaxis()->SetTitleOffset(1);
   st_stack_123->GetXaxis()->SetTitleFont(42);
   st_stack_123->GetYaxis()->SetTitle("Events/50.0");
   st_stack_123->GetYaxis()->SetLabelFont(42);
   st_stack_123->GetYaxis()->SetTitleSize(0.037);
   st_stack_123->GetYaxis()->SetTitleFont(42);
   st_stack_123->GetZaxis()->SetLabelFont(42);
   st_stack_123->GetZaxis()->SetTitleOffset(1);
   st_stack_123->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_123);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,2.997237);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,5.334883);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,3.415057);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,1.605088);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.7993389);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.442462);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.2014874);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.1346807);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.07487292);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.03015824);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.02074699);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.005837508);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.01239158);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.003940972);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.003020277);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(21,0.002353708);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(24,0.002551435);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.08936952);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1190926);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.09503993);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.06650167);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.04538522);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.03372583);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02279026);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01858401);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.0142943);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.008546659);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.007227332);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.003467146);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.005544154);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.002884122);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.003020277);
   VbbHcc_both_Z_pt_stack_1->SetBinError(21,0.002353708);
   VbbHcc_both_Z_pt_stack_1->SetBinError(24,0.002551435);
   VbbHcc_both_Z_pt_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.470695);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,1.207666);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,1.39103);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.8407289);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.4372);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.2198222);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.1148783);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.06822952);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.03652317);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.02142771);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.01473234);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.01272134);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.006368182);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.005847413);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0006591468);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.002330893);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.001296282);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(18,0.002320786);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.001407416);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.000964312);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0001069757);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(25,0.000377906);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(29,0.0004949126);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(33,0.0003624895);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01336308);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.02151407);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.0232037);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01784005);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01287281);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.009095082);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.006618843);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.005265138);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.003781089);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.002871296);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.002338715);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.002196472);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.001660293);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.001499362);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0004204451);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0008959243);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0006775233);
   VbbHcc_both_Z_pt_stack_2->SetBinError(18,0.000879322);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0007422195);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0006822984);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0001069757);
   VbbHcc_both_Z_pt_stack_2->SetBinError(25,0.000377906);
   VbbHcc_both_Z_pt_stack_2->SetBinError(29,0.0004949126);
   VbbHcc_both_Z_pt_stack_2->SetBinError(33,0.0003624895);
   VbbHcc_both_Z_pt_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_both_18->Modified();
   Z_pt_both_18->cd();
   Z_pt_both_18->SetSelected(Z_pt_both_18);
}
