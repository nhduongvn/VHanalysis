#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CSV_18_logY()
{
//=========Macro generated from canvas: overlay_jets_CSV_18/overlay_jets_CSV_18
//=========  (Wed Mar  1 15:14:08 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CSV_18 = new TCanvas("overlay_jets_CSV_18", "overlay_jets_CSV_18",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CSV_18->SetHighLightColor(2);
   overlay_jets_CSV_18->Range(-0.2,-3.721091,1.133333,0.5653106);
   overlay_jets_CSV_18->SetFillColor(0);
   overlay_jets_CSV_18->SetBorderMode(0);
   overlay_jets_CSV_18->SetBorderSize(2);
   overlay_jets_CSV_18->SetLogy();
   overlay_jets_CSV_18->SetLeftMargin(0.15);
   overlay_jets_CSV_18->SetFrameBorderMode(0);
   overlay_jets_CSV_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",20,0,1);
   st_stack_60->SetMinimum(0.000509975);
   st_stack_60->SetMaximum(1.369842);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/0.05");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,0.6297716);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,0.0978234);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,0.04864501);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,0.03266277);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,0.02424176);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,0.01930621);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,0.01579121);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,0.01271895);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,0.01061488);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,0.009196143);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,0.008577279);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,0.007558295);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,0.006521594);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,0.005972328);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,0.00562801);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,0.005628992);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,0.005457779);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,0.005458546);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,0.007349119);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,0.04107615);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,0.0007531786);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.000297582);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.0002066465);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.0001698847);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.0001454525);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.0001333071);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.0001170576);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.0001078943);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.0001034125);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8.809112e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,9.96613e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,8.189029e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,7.553932e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,6.949018e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6.782266e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6.719362e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6.798332e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,6.700991e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,7.69878e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.0001922345);
   VbbHcc_jets_CSV_stack_1->SetEntries(2581203);

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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,0.8726554);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,0.04767356);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,0.01811309);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,0.0100525);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,0.006547207);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,0.004772343);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,0.003713037);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,0.00298741);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,0.002433593);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,0.002098322);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,0.001882743);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,0.001696756);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,0.001504353);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,0.001426196);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,0.001373731);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,0.00142188);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,0.001465181);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,0.001601911);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,0.00227754);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,0.01430329);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.0001264077);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,2.897639e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,1.779873e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,1.341965e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,1.068042e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,9.213658e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,8.03017e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,7.190706e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,6.422714e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,6.128893e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,5.716688e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,5.452627e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,5.073416e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,4.942106e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,4.818398e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,5.067078e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,4.943837e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,5.209375e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,6.33675e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1.592273e-05);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.866354e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_CSV_18->Modified();
   overlay_jets_CSV_18->cd();
   overlay_jets_CSV_18->SetSelected(overlay_jets_CSV_18);
}
