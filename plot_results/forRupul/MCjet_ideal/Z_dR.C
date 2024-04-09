#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR()
{
//=========Macro generated from canvas: Z_dR/Z_dR
//=========  (Fri Mar 29 15:50:00 2024) by ROOT version 6.28/10
   TCanvas *Z_dR = new TCanvas("Z_dR", "Z_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR->SetHighLightColor(2);
   Z_dR->Range(-1.2,-0.4039461,6.8,3.635515);
   Z_dR->SetFillColor(0);
   Z_dR->SetFillStyle(4000);
   Z_dR->SetBorderMode(0);
   Z_dR->SetBorderSize(2);
   Z_dR->SetLeftMargin(0.15);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Z_dR__5 = new TH1D("VH_MCjet_ideal_Z_dR__5","",30,0,6);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(3,2.093016);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(4,3.077684);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(5,2.980942);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(6,2.305697);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(7,1.419664);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(8,0.760707);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(9,0.42771);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(10,0.2318371);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(11,0.196067);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(12,0.1238751);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(13,0.1133962);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(14,0.1201169);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(15,0.09846137);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(16,0.1012238);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(17,0.02370432);
   VH_MCjet_ideal_Z_dR__5->SetBinContent(18,0.007980241);
   VH_MCjet_ideal_Z_dR__5->SetBinError(3,0.09072118);
   VH_MCjet_ideal_Z_dR__5->SetBinError(4,0.1004889);
   VH_MCjet_ideal_Z_dR__5->SetBinError(5,0.105837);
   VH_MCjet_ideal_Z_dR__5->SetBinError(6,0.08747061);
   VH_MCjet_ideal_Z_dR__5->SetBinError(7,0.06179412);
   VH_MCjet_ideal_Z_dR__5->SetBinError(8,0.04376327);
   VH_MCjet_ideal_Z_dR__5->SetBinError(9,0.03192432);
   VH_MCjet_ideal_Z_dR__5->SetBinError(10,0.02459629);
   VH_MCjet_ideal_Z_dR__5->SetBinError(11,0.02676679);
   VH_MCjet_ideal_Z_dR__5->SetBinError(12,0.0186053);
   VH_MCjet_ideal_Z_dR__5->SetBinError(13,0.0198747);
   VH_MCjet_ideal_Z_dR__5->SetBinError(14,0.0184695);
   VH_MCjet_ideal_Z_dR__5->SetBinError(15,0.01746322);
   VH_MCjet_ideal_Z_dR__5->SetBinError(16,0.01833966);
   VH_MCjet_ideal_Z_dR__5->SetBinError(17,0.007577471);
   VH_MCjet_ideal_Z_dR__5->SetBinError(18,0.004100174);
   VH_MCjet_ideal_Z_dR__5->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Z_dR__5->SetLineColor(ci);
   VH_MCjet_ideal_Z_dR__5->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_MCjet_ideal_Z_dR__5->GetXaxis()->SetRange(1,30);
   VH_MCjet_ideal_Z_dR__5->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR__5->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR__5->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetTitle("Events/0.2");
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Z_dR__5->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR__5->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR__5->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR__5->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR__5->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR->Modified();
   Z_dR->cd();
   Z_dR->SetSelected(Z_dR);
}
