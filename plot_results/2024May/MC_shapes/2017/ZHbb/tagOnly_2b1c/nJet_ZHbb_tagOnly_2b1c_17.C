#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHbb_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nJet_ZHbb_tagOnly_2b1c_17/nJet_ZHbb_tagOnly_2b1c_17
//=========  (Fri May 24 12:34:27 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHbb_tagOnly_2b1c_17 = new TCanvas("nJet_ZHbb_tagOnly_2b1c_17", "nJet_ZHbb_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHbb_tagOnly_2b1c_17->SetHighLightColor(2);
   nJet_ZHbb_tagOnly_2b1c_17->Range(-3.3,-555.8673,15.36667,5002.805);
   nJet_ZHbb_tagOnly_2b1c_17->SetFillColor(0);
   nJet_ZHbb_tagOnly_2b1c_17->SetFillStyle(4000);
   nJet_ZHbb_tagOnly_2b1c_17->SetBorderMode(0);
   nJet_ZHbb_tagOnly_2b1c_17->SetBorderSize(2);
   nJet_ZHbb_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nJet_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nJet_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nJet_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nJet_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7445 = new TH1D("Jets_cut_nJet__7445","",14,-0.5,13.5);
   Jets_cut_nJet__7445->SetBinContent(1,2257.761);
   Jets_cut_nJet__7445->SetBinContent(2,2974.652);
   Jets_cut_nJet__7445->SetBinContent(3,4235.179);
   Jets_cut_nJet__7445->SetBinContent(4,2891.364);
   Jets_cut_nJet__7445->SetBinContent(5,1560.98);
   Jets_cut_nJet__7445->SetBinContent(6,526.2821);
   Jets_cut_nJet__7445->SetBinContent(7,151.3542);
   Jets_cut_nJet__7445->SetBinContent(8,39.2114);
   Jets_cut_nJet__7445->SetBinContent(9,8.968634);
   Jets_cut_nJet__7445->SetBinContent(10,1.926852);
   Jets_cut_nJet__7445->SetBinContent(11,0.4210874);
   Jets_cut_nJet__7445->SetBinContent(12,0.09222254);
   Jets_cut_nJet__7445->SetBinContent(13,0.01914166);
   Jets_cut_nJet__7445->SetBinContent(14,0.001659926);
   Jets_cut_nJet__7445->SetBinContent(15,0.0003566997);
   Jets_cut_nJet__7445->SetBinError(1,1.885324);
   Jets_cut_nJet__7445->SetBinError(2,2.178986);
   Jets_cut_nJet__7445->SetBinError(3,2.549135);
   Jets_cut_nJet__7445->SetBinError(4,2.000075);
   Jets_cut_nJet__7445->SetBinError(5,1.50902);
   Jets_cut_nJet__7445->SetBinError(6,0.9011257);
   Jets_cut_nJet__7445->SetBinError(7,0.5020104);
   Jets_cut_nJet__7445->SetBinError(8,0.2705917);
   Jets_cut_nJet__7445->SetBinError(9,0.1345423);
   Jets_cut_nJet__7445->SetBinError(10,0.06707675);
   Jets_cut_nJet__7445->SetBinError(11,0.032459);
   Jets_cut_nJet__7445->SetBinError(12,0.01501012);
   Jets_cut_nJet__7445->SetBinError(13,0.006360808);
   Jets_cut_nJet__7445->SetBinError(14,0.00138067);
   Jets_cut_nJet__7445->SetBinError(15,0.0003566997);
   Jets_cut_nJet__7445->SetEntries(1.472656e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7445->SetLineColor(ci);
   Jets_cut_nJet__7445->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7445->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7445->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7445->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7445->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7445->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7445->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7445->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7445->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7445->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7445->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7445->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7445->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7445->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7445->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHbb_tagOnly_2b1c_17->Modified();
   nJet_ZHbb_tagOnly_2b1c_17->cd();
   nJet_ZHbb_tagOnly_2b1c_17->SetSelected(nJet_ZHbb_tagOnly_2b1c_17);
}
