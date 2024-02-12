#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c/ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c = new TCanvas("ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c", "ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->Range(-400,-487.1828,2266.667,4384.645);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFrameBorderMode(0);
   Double_t xAxis48[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__48 = new TH1D("refNew__48","",13, xAxis48);
   refNew__48->SetBinContent(2,14.03557);
   refNew__48->SetBinContent(3,1094.338);
   refNew__48->SetBinContent(4,3064.777);
   refNew__48->SetBinContent(5,3711.869);
   refNew__48->SetBinContent(6,3530.231);
   refNew__48->SetBinContent(7,2978.555);
   refNew__48->SetBinContent(8,2328.805);
   refNew__48->SetBinContent(9,1781.82);
   refNew__48->SetBinContent(10,1351.355);
   refNew__48->SetBinContent(11,2853.971);
   refNew__48->SetBinContent(12,1029.549);
   refNew__48->SetBinContent(13,688.8583);
   refNew__48->SetBinContent(14,19.73001);
   refNew__48->SetBinError(2,0.731471);
   refNew__48->SetBinError(3,6.497643);
   refNew__48->SetBinError(4,11.06194);
   refNew__48->SetBinError(5,12.4305);
   refNew__48->SetBinError(6,12.35697);
   refNew__48->SetBinError(7,11.5134);
   refNew__48->SetBinError(8,10.26414);
   refNew__48->SetBinError(9,8.996374);
   refNew__48->SetBinError(10,7.833555);
   refNew__48->SetBinError(11,11.45147);
   refNew__48->SetBinError(12,7.021129);
   refNew__48->SetBinError(13,5.945152);
   refNew__48->SetBinError(14,1.171215);
   refNew__48->SetEntries(586796);
   refNew__48->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__48->GetXaxis()->SetRange(1,13);
   refNew__48->GetXaxis()->SetLabelFont(42);
   refNew__48->GetXaxis()->SetTitleOffset(1);
   refNew__48->GetXaxis()->SetTitleFont(42);
   refNew__48->GetYaxis()->SetTitle("Events/Bin");
   refNew__48->GetYaxis()->SetLabelFont(42);
   refNew__48->GetYaxis()->SetTitleFont(42);
   refNew__48->GetZaxis()->SetLabelFont(42);
   refNew__48->GetZaxis()->SetTitleOffset(1);
   refNew__48->GetZaxis()->SetTitleFont(42);
   refNew__48->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->Modified();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->cd();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c->SetSelected(ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_2b2c);
}
