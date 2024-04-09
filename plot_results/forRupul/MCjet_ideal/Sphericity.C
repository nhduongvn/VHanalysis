#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(-0.2,-0.1747812,1.133333,1.573031);
   Sphericity->SetFillColor(0);
   Sphericity->SetFillStyle(4000);
   Sphericity->SetBorderMode(0);
   Sphericity->SetBorderSize(2);
   Sphericity->SetLeftMargin(0.15);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Sphericity__15 = new TH1D("VH_MCjet_ideal_Sphericity__15","",25,0,1);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(1,0.09618321);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(2,0.5800697);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(3,1.004826);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(4,1.320324);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(5,1.331667);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(6,1.162427);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(7,1.145521);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(8,0.9971953);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(9,0.9162142);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(10,0.9008684);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(11,0.7600933);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(12,0.8447918);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(13,0.661405);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(14,0.6252185);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(15,0.5278886);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(16,0.3995916);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(17,0.33393);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(18,0.2102137);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(19,0.1530752);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(20,0.07049977);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(21,0.03456299);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(22,0.004433406);
   VH_MCjet_ideal_Sphericity__15->SetBinContent(23,0.001083271);
   VH_MCjet_ideal_Sphericity__15->SetBinError(1,0.01785033);
   VH_MCjet_ideal_Sphericity__15->SetBinError(2,0.04254439);
   VH_MCjet_ideal_Sphericity__15->SetBinError(3,0.05512325);
   VH_MCjet_ideal_Sphericity__15->SetBinError(4,0.07471954);
   VH_MCjet_ideal_Sphericity__15->SetBinError(5,0.0821112);
   VH_MCjet_ideal_Sphericity__15->SetBinError(6,0.05856809);
   VH_MCjet_ideal_Sphericity__15->SetBinError(7,0.05831273);
   VH_MCjet_ideal_Sphericity__15->SetBinError(8,0.05595701);
   VH_MCjet_ideal_Sphericity__15->SetBinError(9,0.05181496);
   VH_MCjet_ideal_Sphericity__15->SetBinError(10,0.05468679);
   VH_MCjet_ideal_Sphericity__15->SetBinError(11,0.05358922);
   VH_MCjet_ideal_Sphericity__15->SetBinError(12,0.05026835);
   VH_MCjet_ideal_Sphericity__15->SetBinError(13,0.04269536);
   VH_MCjet_ideal_Sphericity__15->SetBinError(14,0.04219475);
   VH_MCjet_ideal_Sphericity__15->SetBinError(15,0.03909459);
   VH_MCjet_ideal_Sphericity__15->SetBinError(16,0.03393927);
   VH_MCjet_ideal_Sphericity__15->SetBinError(17,0.03116771);
   VH_MCjet_ideal_Sphericity__15->SetBinError(18,0.02376317);
   VH_MCjet_ideal_Sphericity__15->SetBinError(19,0.02093869);
   VH_MCjet_ideal_Sphericity__15->SetBinError(20,0.01325415);
   VH_MCjet_ideal_Sphericity__15->SetBinError(21,0.009111441);
   VH_MCjet_ideal_Sphericity__15->SetBinError(22,0.002590192);
   VH_MCjet_ideal_Sphericity__15->SetBinError(23,0.001083271);
   VH_MCjet_ideal_Sphericity__15->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Sphericity__15->SetLineColor(ci);
   VH_MCjet_ideal_Sphericity__15->GetXaxis()->SetTitle("Sphericity");
   VH_MCjet_ideal_Sphericity__15->GetXaxis()->SetRange(1,25);
   VH_MCjet_ideal_Sphericity__15->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Sphericity__15->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Sphericity__15->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetTitle("Events/0.04");
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Sphericity__15->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Sphericity__15->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Sphericity__15->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Sphericity__15->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Sphericity__15->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity->Modified();
   Sphericity->cd();
   Sphericity->SetSelected(Sphericity);
}
