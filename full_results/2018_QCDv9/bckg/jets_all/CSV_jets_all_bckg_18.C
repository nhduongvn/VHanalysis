#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_18()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_18/CSV_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:14 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_18 = new TCanvas("CSV_jets_all_bckg_18", "CSV_jets_all_bckg_18",0,0,600,600);
   CSV_jets_all_bckg_18->SetHighLightColor(2);
   CSV_jets_all_bckg_18->Range(-0.2183529,-1.443113e+12,1.171633,1.058283e+13);
   CSV_jets_all_bckg_18->SetFillColor(0);
   CSV_jets_all_bckg_18->SetFillStyle(4000);
   CSV_jets_all_bckg_18->SetBorderMode(0);
   CSV_jets_all_bckg_18->SetBorderSize(2);
   CSV_jets_all_bckg_18->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_18->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_18->SetBottomMargin(0.12);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.380232e+12);
   
   TH1F *st_stack_168 = new TH1F("st_stack_168","",20,0,1);
   st_stack_168->SetMinimum(0);
   st_stack_168->SetMaximum(9.380232e+12);
   st_stack_168->SetDirectory(0);
   st_stack_168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_168->SetLineColor(ci);
   st_stack_168->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_168->GetXaxis()->SetRange(1,20);
   st_stack_168->GetXaxis()->SetLabelFont(42);
   st_stack_168->GetXaxis()->SetTitleOffset(1);
   st_stack_168->GetXaxis()->SetTitleFont(42);
   st_stack_168->GetYaxis()->SetTitle("Events/0.05");
   st_stack_168->GetYaxis()->SetLabelFont(42);
   st_stack_168->GetYaxis()->SetTitleSize(0.037);
   st_stack_168->GetYaxis()->SetTitleFont(42);
   st_stack_168->GetZaxis()->SetLabelFont(42);
   st_stack_168->GetZaxis()->SetTitleOffset(1);
   st_stack_168->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_168);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,6.253254e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.763122e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,3.879171e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.674366e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,1.011595e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,6.404119e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,4.676336e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,3.5393e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,2.690155e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,2.184461e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.854301e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.556308e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,1.319718e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,1.156132e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,1.043727e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,1.001217e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,9.420611e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,9.80137e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,1.240606e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,5.05488e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,4.122092e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.625008e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,9.985615e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,6.596649e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,5.159826e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,4.109878e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,3.525215e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,3.076056e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,2.675328e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,2.412573e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,2.227322e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,2.026113e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.874676e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.766792e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.681856e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.663291e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.577689e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.628489e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.863125e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,3.750243e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.871231e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,2.339423e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,8.284242e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.708129e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,9093990);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,6440288);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,4994846);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,4231557);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,3733444);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,3305059);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,3085058);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2982022);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2883738);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2776826);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2830357);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2960404);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,3320411);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3635635);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4312319);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,6479691);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,4.001853e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,4499.828);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2530.894);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,1181.441);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,872.0175);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,736.4796);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,652.0582);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,599.9241);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,563.4723);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,530.443);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,512.6589);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,504.7962);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,497.037);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,488.1046);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,493.1247);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,504.8384);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,533.6621);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,559.3273);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,609.0029);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,746.8752);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1863.855);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(6.54851e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   CSV_jets_all_bckg_18->Modified();
   CSV_jets_all_bckg_18->cd();
   CSV_jets_all_bckg_18->SetSelected(CSV_jets_all_bckg_18);
}
