#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagOnly_16/Aplanarity_ZHbb_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagOnly_16 = new TCanvas("Aplanarity_ZHbb_tagOnly_16", "Aplanarity_ZHbb_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagOnly_16->SetHighLightColor(2);
   Aplanarity_ZHbb_tagOnly_16->Range(-0.2,-12.89776,1.133333,116.0798);
   Aplanarity_ZHbb_tagOnly_16->SetFillColor(0);
   Aplanarity_ZHbb_tagOnly_16->SetFillStyle(4000);
   Aplanarity_ZHbb_tagOnly_16->SetBorderMode(0);
   Aplanarity_ZHbb_tagOnly_16->SetBorderSize(2);
   Aplanarity_ZHbb_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1174 = new TH1D("VH_tagOnly_Aplanarity__1174","",50,0,1);
   VH_tagOnly_Aplanarity__1174->SetBinContent(1,98.26863);
   VH_tagOnly_Aplanarity__1174->SetBinContent(2,10.22888);
   VH_tagOnly_Aplanarity__1174->SetBinContent(3,2.375294);
   VH_tagOnly_Aplanarity__1174->SetBinContent(4,0.7675007);
   VH_tagOnly_Aplanarity__1174->SetBinContent(5,0.3617849);
   VH_tagOnly_Aplanarity__1174->SetBinContent(6,0.162985);
   VH_tagOnly_Aplanarity__1174->SetBinContent(7,0.1085511);
   VH_tagOnly_Aplanarity__1174->SetBinContent(8,0.04864634);
   VH_tagOnly_Aplanarity__1174->SetBinContent(9,0.03116846);
   VH_tagOnly_Aplanarity__1174->SetBinContent(10,0.02391252);
   VH_tagOnly_Aplanarity__1174->SetBinContent(11,0.008702166);
   VH_tagOnly_Aplanarity__1174->SetBinContent(12,0.008302529);
   VH_tagOnly_Aplanarity__1174->SetBinContent(13,0.005665346);
   VH_tagOnly_Aplanarity__1174->SetBinContent(14,0.001678832);
   VH_tagOnly_Aplanarity__1174->SetBinContent(15,0.002294612);
   VH_tagOnly_Aplanarity__1174->SetBinContent(16,0.0004966983);
   VH_tagOnly_Aplanarity__1174->SetBinContent(17,0.001224707);
   VH_tagOnly_Aplanarity__1174->SetBinContent(19,0.0004381463);
   VH_tagOnly_Aplanarity__1174->SetBinContent(20,0.001478358);
   VH_tagOnly_Aplanarity__1174->SetBinContent(21,0.0003611448);
   VH_tagOnly_Aplanarity__1174->SetBinError(1,0.2910513);
   VH_tagOnly_Aplanarity__1174->SetBinError(2,0.09188128);
   VH_tagOnly_Aplanarity__1174->SetBinError(3,0.04483982);
   VH_tagOnly_Aplanarity__1174->SetBinError(4,0.02528558);
   VH_tagOnly_Aplanarity__1174->SetBinError(5,0.01705447);
   VH_tagOnly_Aplanarity__1174->SetBinError(6,0.01189434);
   VH_tagOnly_Aplanarity__1174->SetBinError(7,0.00955939);
   VH_tagOnly_Aplanarity__1174->SetBinError(8,0.006203846);
   VH_tagOnly_Aplanarity__1174->SetBinError(9,0.005075876);
   VH_tagOnly_Aplanarity__1174->SetBinError(10,0.004844803);
   VH_tagOnly_Aplanarity__1174->SetBinError(11,0.002417699);
   VH_tagOnly_Aplanarity__1174->SetBinError(12,0.002780054);
   VH_tagOnly_Aplanarity__1174->SetBinError(13,0.002434004);
   VH_tagOnly_Aplanarity__1174->SetBinError(14,0.0007547528);
   VH_tagOnly_Aplanarity__1174->SetBinError(15,0.001644687);
   VH_tagOnly_Aplanarity__1174->SetBinError(16,0.0003611268);
   VH_tagOnly_Aplanarity__1174->SetBinError(17,0.0009478656);
   VH_tagOnly_Aplanarity__1174->SetBinError(19,0.0004381463);
   VH_tagOnly_Aplanarity__1174->SetBinError(20,0.001478358);
   VH_tagOnly_Aplanarity__1174->SetBinError(21,0.0003611448);
   VH_tagOnly_Aplanarity__1174->SetEntries(190087);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1174->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1174->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1174->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1174->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1174->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1174->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1174->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1174->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1174->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1174->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1174->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagOnly_16->Modified();
   Aplanarity_ZHbb_tagOnly_16->cd();
   Aplanarity_ZHbb_tagOnly_16->SetSelected(Aplanarity_ZHbb_tagOnly_16);
}
