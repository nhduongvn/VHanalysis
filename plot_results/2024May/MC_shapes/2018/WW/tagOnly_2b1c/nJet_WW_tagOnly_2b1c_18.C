#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WW_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nJet_WW_tagOnly_2b1c_18/nJet_WW_tagOnly_2b1c_18
//=========  (Fri May 24 12:34:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_WW_tagOnly_2b1c_18 = new TCanvas("nJet_WW_tagOnly_2b1c_18", "nJet_WW_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WW_tagOnly_2b1c_18->SetHighLightColor(2);
   nJet_WW_tagOnly_2b1c_18->Range(-3.3,-464759.5,15.36667,4182835);
   nJet_WW_tagOnly_2b1c_18->SetFillColor(0);
   nJet_WW_tagOnly_2b1c_18->SetFillStyle(4000);
   nJet_WW_tagOnly_2b1c_18->SetBorderMode(0);
   nJet_WW_tagOnly_2b1c_18->SetBorderSize(2);
   nJet_WW_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nJet_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nJet_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7464 = new TH1D("Jets_cut_nJet__7464","",14,-0.5,13.5);
   Jets_cut_nJet__7464->SetBinContent(1,3541025);
   Jets_cut_nJet__7464->SetBinContent(2,2099487);
   Jets_cut_nJet__7464->SetBinContent(3,1135744);
   Jets_cut_nJet__7464->SetBinContent(4,437953.6);
   Jets_cut_nJet__7464->SetBinContent(5,157305.9);
   Jets_cut_nJet__7464->SetBinContent(6,37422.73);
   Jets_cut_nJet__7464->SetBinContent(7,7106.814);
   Jets_cut_nJet__7464->SetBinContent(8,1244.282);
   Jets_cut_nJet__7464->SetBinContent(9,168.8868);
   Jets_cut_nJet__7464->SetBinContent(10,27.63774);
   Jets_cut_nJet__7464->SetBinContent(11,0.4553194);
   Jets_cut_nJet__7464->SetBinError(1,1540.694);
   Jets_cut_nJet__7464->SetBinError(2,1174.71);
   Jets_cut_nJet__7464->SetBinError(3,845.6244);
   Jets_cut_nJet__7464->SetBinError(4,558.0113);
   Jets_cut_nJet__7464->SetBinError(5,371.1944);
   Jets_cut_nJet__7464->SetBinError(6,199.6274);
   Jets_cut_nJet__7464->SetBinError(7,88.49056);
   Jets_cut_nJet__7464->SetBinError(8,48.45342);
   Jets_cut_nJet__7464->SetBinError(9,15.01962);
   Jets_cut_nJet__7464->SetBinError(10,6.508095);
   Jets_cut_nJet__7464->SetBinError(11,0.4553194);
   Jets_cut_nJet__7464->SetEntries(1.5484e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7464->SetLineColor(ci);
   Jets_cut_nJet__7464->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7464->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7464->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7464->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7464->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7464->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7464->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7464->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7464->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7464->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7464->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7464->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7464->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7464->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7464->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WW_tagOnly_2b1c_18->Modified();
   nJet_WW_tagOnly_2b1c_18->cd();
   nJet_WW_tagOnly_2b1c_18->SetSelected(nJet_WW_tagOnly_2b1c_18);
}
