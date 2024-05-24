#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: Z_dR_ZJets_tagOnly_17/Z_dR_ZJets_tagOnly_17
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_tagOnly_17 = new TCanvas("Z_dR_ZJets_tagOnly_17", "Z_dR_ZJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_tagOnly_17->SetHighLightColor(2);
   Z_dR_ZJets_tagOnly_17->Range(-1.2,-1.502827,6.8,3.92791);
   Z_dR_ZJets_tagOnly_17->SetFillColor(0);
   Z_dR_ZJets_tagOnly_17->SetFillStyle(4000);
   Z_dR_ZJets_tagOnly_17->SetBorderMode(0);
   Z_dR_ZJets_tagOnly_17->SetBorderSize(2);
   Z_dR_ZJets_tagOnly_17->SetLogy();
   Z_dR_ZJets_tagOnly_17->SetLeftMargin(0.15);
   Z_dR_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_17->SetFrameBorderMode(0);
   Z_dR_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__854 = new TH1D("VH_tagOnly_Z_dR__854","",30,0,6);
   VH_tagOnly_Z_dR__854->SetBinContent(2,0.21942);
   VH_tagOnly_Z_dR__854->SetBinContent(3,905.2903);
   VH_tagOnly_Z_dR__854->SetBinContent(4,1280.227);
   VH_tagOnly_Z_dR__854->SetBinContent(5,1132.388);
   VH_tagOnly_Z_dR__854->SetBinContent(6,909.0201);
   VH_tagOnly_Z_dR__854->SetBinContent(7,638.6876);
   VH_tagOnly_Z_dR__854->SetBinContent(8,468.9323);
   VH_tagOnly_Z_dR__854->SetBinContent(9,392.3988);
   VH_tagOnly_Z_dR__854->SetBinContent(10,341.7379);
   VH_tagOnly_Z_dR__854->SetBinContent(11,325.7453);
   VH_tagOnly_Z_dR__854->SetBinContent(12,341.6819);
   VH_tagOnly_Z_dR__854->SetBinContent(13,367.4888);
   VH_tagOnly_Z_dR__854->SetBinContent(14,401.3991);
   VH_tagOnly_Z_dR__854->SetBinContent(15,426.6019);
   VH_tagOnly_Z_dR__854->SetBinContent(16,440.207);
   VH_tagOnly_Z_dR__854->SetBinContent(17,410.7164);
   VH_tagOnly_Z_dR__854->SetBinContent(18,363.691);
   VH_tagOnly_Z_dR__854->SetBinContent(19,326.1413);
   VH_tagOnly_Z_dR__854->SetBinContent(20,272.5348);
   VH_tagOnly_Z_dR__854->SetBinContent(21,227.5902);
   VH_tagOnly_Z_dR__854->SetBinContent(22,193.609);
   VH_tagOnly_Z_dR__854->SetBinContent(23,171.1431);
   VH_tagOnly_Z_dR__854->SetBinContent(24,142.2843);
   VH_tagOnly_Z_dR__854->SetBinContent(25,140.9278);
   VH_tagOnly_Z_dR__854->SetBinContent(26,128.2172);
   VH_tagOnly_Z_dR__854->SetBinContent(27,132.4885);
   VH_tagOnly_Z_dR__854->SetBinContent(28,124.7143);
   VH_tagOnly_Z_dR__854->SetBinContent(29,113.6132);
   VH_tagOnly_Z_dR__854->SetBinContent(30,69.34984);
   VH_tagOnly_Z_dR__854->SetBinContent(31,44.37716);
   VH_tagOnly_Z_dR__854->SetBinError(2,0.1291773);
   VH_tagOnly_Z_dR__854->SetBinError(3,13.06148);
   VH_tagOnly_Z_dR__854->SetBinError(4,17.69089);
   VH_tagOnly_Z_dR__854->SetBinError(5,21.914);
   VH_tagOnly_Z_dR__854->SetBinError(6,22.75784);
   VH_tagOnly_Z_dR__854->SetBinError(7,18.74059);
   VH_tagOnly_Z_dR__854->SetBinError(8,18.70704);
   VH_tagOnly_Z_dR__854->SetBinError(9,17.0978);
   VH_tagOnly_Z_dR__854->SetBinError(10,13.54146);
   VH_tagOnly_Z_dR__854->SetBinError(11,12.14357);
   VH_tagOnly_Z_dR__854->SetBinError(12,12.94643);
   VH_tagOnly_Z_dR__854->SetBinError(13,15.64981);
   VH_tagOnly_Z_dR__854->SetBinError(14,18.47138);
   VH_tagOnly_Z_dR__854->SetBinError(15,15.92041);
   VH_tagOnly_Z_dR__854->SetBinError(16,15.47523);
   VH_tagOnly_Z_dR__854->SetBinError(17,13.19878);
   VH_tagOnly_Z_dR__854->SetBinError(18,12.30843);
   VH_tagOnly_Z_dR__854->SetBinError(19,12.75556);
   VH_tagOnly_Z_dR__854->SetBinError(20,12.18776);
   VH_tagOnly_Z_dR__854->SetBinError(21,8.784454);
   VH_tagOnly_Z_dR__854->SetBinError(22,11.25924);
   VH_tagOnly_Z_dR__854->SetBinError(23,7.674089);
   VH_tagOnly_Z_dR__854->SetBinError(24,8.586413);
   VH_tagOnly_Z_dR__854->SetBinError(25,8.818296);
   VH_tagOnly_Z_dR__854->SetBinError(26,6.48783);
   VH_tagOnly_Z_dR__854->SetBinError(27,7.273968);
   VH_tagOnly_Z_dR__854->SetBinError(28,6.930959);
   VH_tagOnly_Z_dR__854->SetBinError(29,7.912745);
   VH_tagOnly_Z_dR__854->SetBinError(30,5.626543);
   VH_tagOnly_Z_dR__854->SetBinError(31,3.668106);
   VH_tagOnly_Z_dR__854->SetEntries(88024);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__854->SetLineColor(ci);
   VH_tagOnly_Z_dR__854->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__854->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__854->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__854->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__854->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__854->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__854->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__854->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__854->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__854->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__854->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__854->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__854->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__854->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__854->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_tagOnly_17->Modified();
   Z_dR_ZJets_tagOnly_17->cd();
   Z_dR_ZJets_tagOnly_17->SetSelected(Z_dR_ZJets_tagOnly_17);
}
