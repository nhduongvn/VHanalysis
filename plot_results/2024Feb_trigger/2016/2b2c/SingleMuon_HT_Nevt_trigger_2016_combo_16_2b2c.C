#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c/SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c = new TCanvas("SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c", "SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->Range(-400,-58.40625,2266.667,525.6563);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetFrameBorderMode(0);
   Double_t xAxis49[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__49 = new TH1D("probeNew__49","",13, xAxis49);
   probeNew__49->SetBinContent(2,1);
   probeNew__49->SetBinContent(3,61);
   probeNew__49->SetBinContent(4,291);
   probeNew__49->SetBinContent(5,439);
   probeNew__49->SetBinContent(6,445);
   probeNew__49->SetBinContent(7,352);
   probeNew__49->SetBinContent(8,337);
   probeNew__49->SetBinContent(9,249);
   probeNew__49->SetBinContent(10,187);
   probeNew__49->SetBinContent(11,422);
   probeNew__49->SetBinContent(12,159);
   probeNew__49->SetBinContent(13,108);
   probeNew__49->SetBinContent(14,1);
   probeNew__49->SetEntries(3052);
   probeNew__49->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__49->GetXaxis()->SetRange(1,13);
   probeNew__49->GetXaxis()->SetLabelFont(42);
   probeNew__49->GetXaxis()->SetTitleOffset(1);
   probeNew__49->GetXaxis()->SetTitleFont(42);
   probeNew__49->GetYaxis()->SetTitle("Events/Bin");
   probeNew__49->GetYaxis()->SetLabelFont(42);
   probeNew__49->GetYaxis()->SetTitleFont(42);
   probeNew__49->GetZaxis()->SetLabelFont(42);
   probeNew__49->GetZaxis()->SetTitleOffset(1);
   probeNew__49->GetZaxis()->SetTitleFont(42);
   probeNew__49->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->Modified();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->cd();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c->SetSelected(SingleMuon_HT_Nevt_trigger_2016_combo_16_2b2c);
}
