#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi()
{
//=========Macro generated from canvas: Z_dPhi/Z_dPhi
//=========  (Wed Mar 27 16:46:17 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi = new TCanvas("Z_dPhi", "Z_dPhi",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi->SetHighLightColor(2);
   Z_dPhi->Range(-0.8,-0.005623386,4.533333,0.05061047);
   Z_dPhi->SetFillColor(0);
   Z_dPhi->SetFillStyle(4000);
   Z_dPhi->SetBorderMode(0);
   Z_dPhi->SetBorderSize(2);
   Z_dPhi->SetLeftMargin(0.15);
   Z_dPhi->SetFrameFillStyle(1000);
   Z_dPhi->SetFrameBorderMode(0);
   Z_dPhi->SetFrameFillStyle(1000);
   Z_dPhi->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__55 = new TH1D("VH_DHZfirst_Z_dPhi__55","",120,0,4);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(0,0.2740396);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(1,0.001184913);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(3,0.006565864);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(4,0.01218098);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(5,0.009411514);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(6,0.005134416);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(7,0.01069697);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(8,0.003281267);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(9,0.009164908);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(10,0.007032161);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(11,0.002613679);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(12,0.04284484);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(13,0.009413728);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(14,0.005871348);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(15,0.003177345);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(16,0.01001029);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(17,0.01041811);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(18,0.01149669);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(19,0.01249375);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(20,0.01136523);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(21,0.003388947);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(22,0.00261437);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(23,0.006212939);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(24,0.008659641);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(26,0.00386192);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(27,0.003323667);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(28,0.002058965);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(31,0.002882771);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(32,0.003394373);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(35,0.002230185);
   VH_DHZfirst_Z_dPhi__55->SetBinContent(45,0.002287799);
   VH_DHZfirst_Z_dPhi__55->SetBinError(0,0.02932931);
   VH_DHZfirst_Z_dPhi__55->SetBinError(1,0.001184913);
   VH_DHZfirst_Z_dPhi__55->SetBinError(3,0.004785584);
   VH_DHZfirst_Z_dPhi__55->SetBinError(4,0.00786314);
   VH_DHZfirst_Z_dPhi__55->SetBinError(5,0.005592577);
   VH_DHZfirst_Z_dPhi__55->SetBinError(6,0.003729502);
   VH_DHZfirst_Z_dPhi__55->SetBinError(7,0.005440349);
   VH_DHZfirst_Z_dPhi__55->SetBinError(8,0.003281267);
   VH_DHZfirst_Z_dPhi__55->SetBinError(9,0.005686104);
   VH_DHZfirst_Z_dPhi__55->SetBinError(10,0.004092279);
   VH_DHZfirst_Z_dPhi__55->SetBinError(11,0.002613679);
   VH_DHZfirst_Z_dPhi__55->SetBinError(12,0.02647158);
   VH_DHZfirst_Z_dPhi__55->SetBinError(13,0.005275339);
   VH_DHZfirst_Z_dPhi__55->SetBinError(14,0.004189873);
   VH_DHZfirst_Z_dPhi__55->SetBinError(15,0.003177345);
   VH_DHZfirst_Z_dPhi__55->SetBinError(16,0.006385629);
   VH_DHZfirst_Z_dPhi__55->SetBinError(17,0.005202272);
   VH_DHZfirst_Z_dPhi__55->SetBinError(18,0.005187654);
   VH_DHZfirst_Z_dPhi__55->SetBinError(19,0.005881734);
   VH_DHZfirst_Z_dPhi__55->SetBinError(20,0.005733917);
   VH_DHZfirst_Z_dPhi__55->SetBinError(21,0.002473365);
   VH_DHZfirst_Z_dPhi__55->SetBinError(22,0.00261437);
   VH_DHZfirst_Z_dPhi__55->SetBinError(23,0.004469972);
   VH_DHZfirst_Z_dPhi__55->SetBinError(24,0.006125332);
   VH_DHZfirst_Z_dPhi__55->SetBinError(26,0.002754961);
   VH_DHZfirst_Z_dPhi__55->SetBinError(27,0.003323667);
   VH_DHZfirst_Z_dPhi__55->SetBinError(28,0.002058965);
   VH_DHZfirst_Z_dPhi__55->SetBinError(31,0.002882771);
   VH_DHZfirst_Z_dPhi__55->SetBinError(32,0.003394373);
   VH_DHZfirst_Z_dPhi__55->SetBinError(35,0.002230185);
   VH_DHZfirst_Z_dPhi__55->SetBinError(45,0.002287799);
   VH_DHZfirst_Z_dPhi__55->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__55->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi->Modified();
   Z_dPhi->cd();
   Z_dPhi->SetSelected(Z_dPhi);
}
