#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_2b1c_18/Aplanarity_TT_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_TT_DHZfirst_2b1c_18", "Aplanarity_TT_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_2b1c_18->Range(-0.2,-2.298703,1.133333,6.263567);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_2b1c_18->SetLogy();
   Aplanarity_TT_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4068 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4068","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(1,134831.3);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(2,18002.84);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(3,3935.251);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(4,1125.929);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(5,379.9137);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(6,152.313);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(7,66.81643);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(8,29.90596);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(9,20.14699);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(10,9.356185);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(11,6.785797);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(12,4.254488);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(13,1.804714);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(14,1.106886);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(15,0.4611728);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(16,1.079122);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(17,0.5905471);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(18,0.3540311);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinContent(19,0.07220276);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(1,151.0375);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(2,53.72854);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(3,27.45937);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(4,14.12948);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(5,7.558076);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(6,4.923738);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(7,3.116406);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(8,2.069662);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(9,1.833689);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(10,1.160184);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(11,0.9326048);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(12,0.8695615);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(13,0.5023159);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(14,0.3875657);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(15,0.1972452);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(16,0.6613926);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(17,0.2860725);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(18,0.1842415);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetBinError(19,0.07220276);
   VH_DHZfirst_2b1c_Aplanarity__4068->SetEntries(1496965);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4068->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4068->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4068->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4068->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_2b1c_18->Modified();
   Aplanarity_TT_DHZfirst_2b1c_18->cd();
   Aplanarity_TT_DHZfirst_2b1c_18->SetSelected(Aplanarity_TT_DHZfirst_2b1c_18);
}
