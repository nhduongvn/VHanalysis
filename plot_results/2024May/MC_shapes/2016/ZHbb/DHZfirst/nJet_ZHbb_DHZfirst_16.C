#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHbb_DHZfirst_16()
{
//=========Macro generated from canvas: nJet_ZHbb_DHZfirst_16/nJet_ZHbb_DHZfirst_16
//=========  (Fri May 24 12:33:55 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHbb_DHZfirst_16 = new TCanvas("nJet_ZHbb_DHZfirst_16", "nJet_ZHbb_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHbb_DHZfirst_16->SetHighLightColor(2);
   nJet_ZHbb_DHZfirst_16->Range(-3.3,-962.1632,15.36667,8659.469);
   nJet_ZHbb_DHZfirst_16->SetFillColor(0);
   nJet_ZHbb_DHZfirst_16->SetFillStyle(4000);
   nJet_ZHbb_DHZfirst_16->SetBorderMode(0);
   nJet_ZHbb_DHZfirst_16->SetBorderSize(2);
   nJet_ZHbb_DHZfirst_16->SetLeftMargin(0.15);
   nJet_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   nJet_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   nJet_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   nJet_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5884 = new TH1D("Jets_cut_nJet__5884","",14,-0.5,13.5);
   Jets_cut_nJet__5884->SetBinContent(1,6711.368);
   Jets_cut_nJet__5884->SetBinContent(2,7330.767);
   Jets_cut_nJet__5884->SetBinContent(3,6761.94);
   Jets_cut_nJet__5884->SetBinContent(4,2683.389);
   Jets_cut_nJet__5884->SetBinContent(5,1235.951);
   Jets_cut_nJet__5884->SetBinContent(6,411.3265);
   Jets_cut_nJet__5884->SetBinContent(7,117.6257);
   Jets_cut_nJet__5884->SetBinContent(8,30.20817);
   Jets_cut_nJet__5884->SetBinContent(9,6.967667);
   Jets_cut_nJet__5884->SetBinContent(10,1.509464);
   Jets_cut_nJet__5884->SetBinContent(11,0.3021972);
   Jets_cut_nJet__5884->SetBinContent(12,0.05378617);
   Jets_cut_nJet__5884->SetBinContent(13,0.01363988);
   Jets_cut_nJet__5884->SetBinContent(14,0.0003082419);
   Jets_cut_nJet__5884->SetBinContent(15,0.0003480807);
   Jets_cut_nJet__5884->SetBinError(1,6.421415);
   Jets_cut_nJet__5884->SetBinError(2,6.626973);
   Jets_cut_nJet__5884->SetBinError(3,5.716996);
   Jets_cut_nJet__5884->SetBinError(4,2.258785);
   Jets_cut_nJet__5884->SetBinError(5,1.02948);
   Jets_cut_nJet__5884->SetBinError(6,0.5857231);
   Jets_cut_nJet__5884->SetBinError(7,0.3160757);
   Jets_cut_nJet__5884->SetBinError(8,0.163867);
   Jets_cut_nJet__5884->SetBinError(9,0.0809626);
   Jets_cut_nJet__5884->SetBinError(10,0.03936169);
   Jets_cut_nJet__5884->SetBinError(11,0.01775602);
   Jets_cut_nJet__5884->SetBinError(12,0.007423364);
   Jets_cut_nJet__5884->SetBinError(13,0.003803143);
   Jets_cut_nJet__5884->SetBinError(14,0.0003082419);
   Jets_cut_nJet__5884->SetBinError(15,0.0003480807);
   Jets_cut_nJet__5884->SetEntries(1.487403e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5884->SetLineColor(ci);
   Jets_cut_nJet__5884->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5884->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5884->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5884->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5884->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5884->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5884->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5884->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5884->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5884->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5884->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5884->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5884->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5884->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5884->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHbb_DHZfirst_16->Modified();
   nJet_ZHbb_DHZfirst_16->cd();
   nJet_ZHbb_DHZfirst_16->SetSelected(nJet_ZHbb_DHZfirst_16);
}
