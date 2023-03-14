#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvB_18_logY()
{
//=========Macro generated from canvas: overlay_jets_CvB_18/overlay_jets_CvB_18
//=========  (Wed Mar  1 15:14:08 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvB_18 = new TCanvas("overlay_jets_CvB_18", "overlay_jets_CvB_18",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvB_18->SetHighLightColor(2);
   overlay_jets_CvB_18->Range(-0.2,-3.425947,1.133333,0.036084);
   overlay_jets_CvB_18->SetFillColor(0);
   overlay_jets_CvB_18->SetBorderMode(0);
   overlay_jets_CvB_18->SetBorderSize(2);
   overlay_jets_CvB_18->SetLogy();
   overlay_jets_CvB_18->SetLeftMargin(0.15);
   overlay_jets_CvB_18->SetFrameBorderMode(0);
   overlay_jets_CvB_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",20,0,1);
   st_stack_66->SetMinimum(0.0008322545);
   st_stack_66->SetMaximum(0.4896445);
   st_stack_66->SetDirectory(0);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Events/0.05");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,0.04275505);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,0.008311491);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,0.006465941);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,0.00678512);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,0.007359198);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,0.008049372);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,0.008823194);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,0.01009035);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,0.01255577);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,0.01522907);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,0.01789286);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,0.02224794);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,0.02986169);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,0.03962871);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,0.05463447);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,0.07918278);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,0.1238137);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,0.2128586);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,0.2405703);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,0.05288451);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.000195934);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,8.268058e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7.196627e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,7.447865e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,7.704268e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,8.198882e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,8.602277e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,9.254463e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.0001055416);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.0001252053);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.0001225108);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.0001447522);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.0001618361);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.0001989862);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.0002189582);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.0002660777);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.0003284204);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.0004375194);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.0004687162);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.000218052);
   VbbHcc_jets_CvB_stack_1->SetEntries(2581203);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->SetLineWidth(2);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,0.01487982);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,0.002633931);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,0.001977343);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,0.002028113);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,0.002218455);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,0.002516818);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,0.002957994);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,0.003620312);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,0.004722953);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,0.006474339);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,0.008844681);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,0.01241708);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,0.01861908);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,0.02788754);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,0.04603875);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,0.08022481);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,0.1577612);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,0.3364515);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,0.2470113);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,0.02071394);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1.620064e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,6.822939e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,5.75824e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,5.902472e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,6.160943e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,6.470352e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,7.070695e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,7.933399e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,9.099622e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,1.059792e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,1.238592e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,1.469313e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,1.812272e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,2.211228e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,2.841764e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,3.785408e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,5.306574e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,7.821967e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,6.864225e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,1.944273e-05);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.866354e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->SetLineStyle(2);
   VbbHcc_jets_CvB_stack_2->SetLineWidth(2);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","CvB (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","CvB (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
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
   overlay_jets_CvB_18->Modified();
   overlay_jets_CvB_18->cd();
   overlay_jets_CvB_18->SetSelected(overlay_jets_CvB_18);
}
