#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_SingleTop_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: nJet_SingleTop_tagFirst_2b1c_17/nJet_SingleTop_tagFirst_2b1c_17
//=========  (Fri May 24 12:34:11 2024) by ROOT version 6.28/10
   TCanvas *nJet_SingleTop_tagFirst_2b1c_17 = new TCanvas("nJet_SingleTop_tagFirst_2b1c_17", "nJet_SingleTop_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_SingleTop_tagFirst_2b1c_17->SetHighLightColor(2);
   nJet_SingleTop_tagFirst_2b1c_17->Range(-3.3,-384318.9,15.36667,3458870);
   nJet_SingleTop_tagFirst_2b1c_17->SetFillColor(0);
   nJet_SingleTop_tagFirst_2b1c_17->SetFillStyle(4000);
   nJet_SingleTop_tagFirst_2b1c_17->SetBorderMode(0);
   nJet_SingleTop_tagFirst_2b1c_17->SetBorderSize(2);
   nJet_SingleTop_tagFirst_2b1c_17->SetLeftMargin(0.15);
   nJet_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   nJet_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6680 = new TH1D("Jets_cut_nJet__6680","",14,-0.5,13.5);
   Jets_cut_nJet__6680->SetBinContent(1,1814795);
   Jets_cut_nJet__6680->SetBinContent(2,2928143);
   Jets_cut_nJet__6680->SetBinContent(3,2856514);
   Jets_cut_nJet__6680->SetBinContent(4,1500972);
   Jets_cut_nJet__6680->SetBinContent(5,636676.7);
   Jets_cut_nJet__6680->SetBinContent(6,223083.2);
   Jets_cut_nJet__6680->SetBinContent(7,65068.7);
   Jets_cut_nJet__6680->SetBinContent(8,16557.87);
   Jets_cut_nJet__6680->SetBinContent(9,3789.303);
   Jets_cut_nJet__6680->SetBinContent(10,754.99);
   Jets_cut_nJet__6680->SetBinContent(11,149.3287);
   Jets_cut_nJet__6680->SetBinContent(12,33.41316);
   Jets_cut_nJet__6680->SetBinContent(13,6.293282);
   Jets_cut_nJet__6680->SetBinContent(14,0.6816109);
   Jets_cut_nJet__6680->SetBinError(1,373.6122);
   Jets_cut_nJet__6680->SetBinError(2,500.0385);
   Jets_cut_nJet__6680->SetBinError(3,515.5951);
   Jets_cut_nJet__6680->SetBinError(4,411.6191);
   Jets_cut_nJet__6680->SetBinError(5,315.5703);
   Jets_cut_nJet__6680->SetBinError(6,214.5703);
   Jets_cut_nJet__6680->SetBinError(7,126.6701);
   Jets_cut_nJet__6680->SetBinError(8,67.64299);
   Jets_cut_nJet__6680->SetBinError(9,33.81983);
   Jets_cut_nJet__6680->SetBinError(10,15.0968);
   Jets_cut_nJet__6680->SetBinError(11,7.113147);
   Jets_cut_nJet__6680->SetBinError(12,3.520493);
   Jets_cut_nJet__6680->SetBinError(13,1.753236);
   Jets_cut_nJet__6680->SetBinError(14,0.2610533);
   Jets_cut_nJet__6680->SetEntries(2.00651e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6680->SetLineColor(ci);
   Jets_cut_nJet__6680->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6680->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6680->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6680->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6680->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6680->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6680->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6680->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6680->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6680->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6680->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6680->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6680->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6680->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6680->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_SingleTop_tagFirst_2b1c_17->Modified();
   nJet_SingleTop_tagFirst_2b1c_17->cd();
   nJet_SingleTop_tagFirst_2b1c_17->SetSelected(nJet_SingleTop_tagFirst_2b1c_17);
}
