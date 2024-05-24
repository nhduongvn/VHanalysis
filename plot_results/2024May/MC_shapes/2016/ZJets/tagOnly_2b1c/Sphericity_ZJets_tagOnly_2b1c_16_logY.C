#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_2b1c_16/Sphericity_ZJets_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_2b1c_16 = new TCanvas("Sphericity_ZJets_tagOnly_2b1c_16", "Sphericity_ZJets_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_2b1c_16->Range(-0.2,-1.495313,1.133333,5.249381);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_2b1c_16->SetLogy();
   Sphericity_ZJets_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3313 = new TH1D("VH_tagOnly_2b1c_Sphericity__3313","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(1,19831.82);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(2,16961);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(3,9896.846);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(4,5922.129);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(5,3272.973);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(6,1527.098);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(7,705.8197);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(8,355.377);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(9,223.7188);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(10,155.8847);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(11,109.3971);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(12,80.93382);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(13,69.92581);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(14,51.24122);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(15,35.99342);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(16,26.17954);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(17,20.55467);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(18,14.01643);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(19,7.26299);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(20,2.242793);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(21,1.498092);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinContent(22,0.3021249);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(1,94.40716);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(2,99.81646);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(3,74.40342);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(4,55.16945);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(5,38.01723);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(6,22.75854);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(7,16.59671);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(8,8.974413);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(9,6.528983);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(10,6.075088);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(11,3.611018);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(12,3.091013);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(13,4.81185);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(14,3.377558);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(15,1.960543);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(16,2.567626);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(17,2.570287);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(18,2.123553);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(19,0.9490826);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(20,0.4144889);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(21,0.4776165);
   VH_tagOnly_2b1c_Sphericity__3313->SetBinError(22,0.2569024);
   VH_tagOnly_2b1c_Sphericity__3313->SetEntries(498402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3313->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3313->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3313->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3313->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3313->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3313->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3313->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3313->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_2b1c_16->Modified();
   Sphericity_ZJets_tagOnly_2b1c_16->cd();
   Sphericity_ZJets_tagOnly_2b1c_16->SetSelected(Sphericity_ZJets_tagOnly_2b1c_16);
}
