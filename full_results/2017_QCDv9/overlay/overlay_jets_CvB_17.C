#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvB_17()
{
//=========Macro generated from canvas: overlay_jets_CvB_17/overlay_jets_CvB_17
//=========  (Wed Mar  1 15:11:09 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvB_17 = new TCanvas("overlay_jets_CvB_17", "overlay_jets_CvB_17",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvB_17->SetHighLightColor(2);
   overlay_jets_CvB_17->Range(-0.2,-0.04370916,1.133333,0.3933824);
   overlay_jets_CvB_17->SetFillColor(0);
   overlay_jets_CvB_17->SetBorderMode(0);
   overlay_jets_CvB_17->SetBorderSize(2);
   overlay_jets_CvB_17->SetLeftMargin(0.15);
   overlay_jets_CvB_17->SetFrameBorderMode(0);
   overlay_jets_CvB_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_65 = new TH1F("st_stack_65","",20,0,1);
   st_stack_65->SetMinimum(0);
   st_stack_65->SetMaximum(0.3496732);
   st_stack_65->SetDirectory(0);
   st_stack_65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_65->SetLineColor(ci);
   st_stack_65->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_65->GetXaxis()->SetLabelFont(42);
   st_stack_65->GetXaxis()->SetTitleOffset(1);
   st_stack_65->GetXaxis()->SetTitleFont(42);
   st_stack_65->GetYaxis()->SetTitle("Events/0.05");
   st_stack_65->GetYaxis()->SetLabelFont(42);
   st_stack_65->GetYaxis()->SetTitleFont(42);
   st_stack_65->GetZaxis()->SetLabelFont(42);
   st_stack_65->GetZaxis()->SetTitleOffset(1);
   st_stack_65->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_65);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,0.04332401);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,0.008581469);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,0.006839043);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,0.007131479);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,0.007903467);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,0.008456228);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,0.009419612);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,0.01066758);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,0.01311276);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,0.0157897);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,0.01902975);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,0.02312308);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,0.03135251);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,0.04079246);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,0.05641669);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,0.08023545);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,0.1246923);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,0.2099236);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,0.2321304);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,0.05107833);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.0001827139);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,8.166012e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7.320404e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,7.51199e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,7.901714e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,8.156592e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,8.649492e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,9.213973e-05);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.0001022621);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.0001119743);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.0001232359);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.0001354959);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.000157787);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.0001799012);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.0002110259);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.0002509253);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.0003117283);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.0004025004);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.0004260513);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.000198762);
   VbbHcc_jets_CvB_stack_1->SetEntries(2586448);

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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,0.01490898);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,0.002704055);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,0.002067586);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,0.002132166);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,0.002354577);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,0.002696577);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,0.003175911);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,0.003898112);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,0.005096263);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,0.007036601);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,0.009587719);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,0.01346073);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,0.01996439);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,0.02962168);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,0.04818586);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,0.08246929);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,0.1597973);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,0.3330221);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,0.2382064);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,0.01961366);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1.457488e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,6.198785e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,5.417352e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,5.521061e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,5.814494e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,6.238989e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,6.783015e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,7.531152e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,8.631121e-06);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,1.01646e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,1.188755e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,1.411002e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,1.719445e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,2.098335e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,2.67917e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,3.510871e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,4.879743e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,7.035534e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,6.005754e-05);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,1.666368e-05);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.383807e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_CvB_17->Modified();
   overlay_jets_CvB_17->cd();
   overlay_jets_CvB_17->SetSelected(overlay_jets_CvB_17);
}
