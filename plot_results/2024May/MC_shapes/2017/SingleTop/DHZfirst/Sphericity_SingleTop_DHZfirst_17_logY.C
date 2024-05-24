#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_17/Sphericity_SingleTop_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_17 = new TCanvas("Sphericity_SingleTop_DHZfirst_17", "Sphericity_SingleTop_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_17->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_17->Range(-0.2,-2.832218,1.133333,3.588381);
   Sphericity_SingleTop_DHZfirst_17->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_17->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_17->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_17->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_17->SetLogy();
   Sphericity_SingleTop_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1880 = new TH1D("VH_DHZfirst_Sphericity__1880","",25,0,1);
   VH_DHZfirst_Sphericity__1880->SetBinContent(1,466.4148);
   VH_DHZfirst_Sphericity__1880->SetBinContent(2,430.3239);
   VH_DHZfirst_Sphericity__1880->SetBinContent(3,241.2394);
   VH_DHZfirst_Sphericity__1880->SetBinContent(4,138.2697);
   VH_DHZfirst_Sphericity__1880->SetBinContent(5,62.43259);
   VH_DHZfirst_Sphericity__1880->SetBinContent(6,31.34036);
   VH_DHZfirst_Sphericity__1880->SetBinContent(7,9.32113);
   VH_DHZfirst_Sphericity__1880->SetBinContent(8,4.507606);
   VH_DHZfirst_Sphericity__1880->SetBinContent(9,2.380721);
   VH_DHZfirst_Sphericity__1880->SetBinContent(10,0.7167697);
   VH_DHZfirst_Sphericity__1880->SetBinContent(11,0.6986429);
   VH_DHZfirst_Sphericity__1880->SetBinContent(12,0.6471582);
   VH_DHZfirst_Sphericity__1880->SetBinContent(13,0.07281838);
   VH_DHZfirst_Sphericity__1880->SetBinContent(14,0.2430458);
   VH_DHZfirst_Sphericity__1880->SetBinContent(16,0.3895219);
   VH_DHZfirst_Sphericity__1880->SetBinContent(17,0.1373122);
   VH_DHZfirst_Sphericity__1880->SetBinContent(19,0.01290839);
   VH_DHZfirst_Sphericity__1880->SetBinError(1,9.149806);
   VH_DHZfirst_Sphericity__1880->SetBinError(2,8.7555);
   VH_DHZfirst_Sphericity__1880->SetBinError(3,6.946656);
   VH_DHZfirst_Sphericity__1880->SetBinError(4,5.33139);
   VH_DHZfirst_Sphericity__1880->SetBinError(5,3.491105);
   VH_DHZfirst_Sphericity__1880->SetBinError(6,2.639465);
   VH_DHZfirst_Sphericity__1880->SetBinError(7,1.380839);
   VH_DHZfirst_Sphericity__1880->SetBinError(8,1.03047);
   VH_DHZfirst_Sphericity__1880->SetBinError(9,0.6287179);
   VH_DHZfirst_Sphericity__1880->SetBinError(10,0.3483394);
   VH_DHZfirst_Sphericity__1880->SetBinError(11,0.4343044);
   VH_DHZfirst_Sphericity__1880->SetBinError(12,0.286226);
   VH_DHZfirst_Sphericity__1880->SetBinError(13,0.05207627);
   VH_DHZfirst_Sphericity__1880->SetBinError(14,0.2036886);
   VH_DHZfirst_Sphericity__1880->SetBinError(16,0.247021);
   VH_DHZfirst_Sphericity__1880->SetBinError(17,0.1373122);
   VH_DHZfirst_Sphericity__1880->SetBinError(19,0.01290839);
   VH_DHZfirst_Sphericity__1880->SetEntries(19010);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1880->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1880->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1880->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1880->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1880->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1880->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1880->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1880->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1880->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1880->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1880->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_17->Modified();
   Sphericity_SingleTop_DHZfirst_17->cd();
   Sphericity_SingleTop_DHZfirst_17->SetSelected(Sphericity_SingleTop_DHZfirst_17);
}
