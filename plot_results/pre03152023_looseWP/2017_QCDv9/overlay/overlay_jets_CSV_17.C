#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CSV_17()
{
//=========Macro generated from canvas: overlay_jets_CSV_17/overlay_jets_CSV_17
//=========  (Fri Mar 10 12:34:06 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CSV_17 = new TCanvas("overlay_jets_CSV_17", "overlay_jets_CSV_17",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CSV_17->SetHighLightColor(2);
   overlay_jets_CSV_17->Range(-0.2,-0.1135073,1.133333,1.021565);
   overlay_jets_CSV_17->SetFillColor(0);
   overlay_jets_CSV_17->SetBorderMode(0);
   overlay_jets_CSV_17->SetBorderSize(2);
   overlay_jets_CSV_17->SetLeftMargin(0.15);
   overlay_jets_CSV_17->SetFrameBorderMode(0);
   overlay_jets_CSV_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",20,0,1);
   st_stack_59->SetMinimum(0);
   st_stack_59->SetMaximum(0.9080579);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.05");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,0.6180679);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,0.09931403);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,0.05037383);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,0.03373075);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,0.02513781);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,0.0199246);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,0.01637611);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,0.01359212);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,0.01112892);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,0.009725621);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,0.00897798);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,0.00786319);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,0.006738925);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,0.00644788);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,0.005885221);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,0.005956625);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,0.005683841);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,0.005834433);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,0.00759682);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,0.04164339);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,0.0006925047);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.0002801175);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.0001999843);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.0001639348);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.0001413144);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.0001258708);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.0001143503);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.0001041747);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,9.414167e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8.80675e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,8.45097e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,7.900809e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,7.283797e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,7.148769e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6.82325e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6.862015e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6.690272e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,6.752888e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,7.677521e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.0001790981);
   VbbHcc_jets_CSV_stack_1->SetEntries(2586448);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->SetLineWidth(2);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,0.8648171);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,0.0508394);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,0.01949991);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,0.01087359);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,0.007083162);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,0.005143933);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,0.00399955);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,0.003217819);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,0.002623202);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,0.002248929);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,0.002013259);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,0.001792255);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,0.001592483);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,0.001493027);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,0.001445678);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,0.001486614);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,0.001533118);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,0.001656455);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,0.002317584);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,0.01432295);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.0001137334);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,2.743428e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,1.696421e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,1.26614e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,1.020845e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,8.695165e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,7.656541e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,6.861462e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,6.186367e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,5.718162e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,5.403525e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,5.091237e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,4.791003e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,4.630138e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,4.554388e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,4.613171e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,4.681815e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,4.850428e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,5.729412e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1.429471e-05);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.372673e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->SetLineStyle(2);
   VbbHcc_jets_CSV_stack_2->SetLineWidth(2);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","CSV (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","CSV (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
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
   overlay_jets_CSV_17->Modified();
   overlay_jets_CSV_17->cd();
   overlay_jets_CSV_17->SetSelected(overlay_jets_CSV_17);
}
