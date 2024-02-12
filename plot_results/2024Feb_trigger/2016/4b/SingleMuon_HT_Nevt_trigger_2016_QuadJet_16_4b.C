#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b/SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b
//=========  (Mon Feb 12 14:06:31 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b = new TCanvas("SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b", "SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->Range(-400,-4.33125,2266.667,38.98125);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetFrameBorderMode(0);
   Double_t xAxis1[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__1 = new TH1D("probeNew__1","",13, xAxis1);
   probeNew__1->SetBinContent(3,3);
   probeNew__1->SetBinContent(4,20);
   probeNew__1->SetBinContent(5,26);
   probeNew__1->SetBinContent(6,19);
   probeNew__1->SetBinContent(7,24);
   probeNew__1->SetBinContent(8,19);
   probeNew__1->SetBinContent(9,11);
   probeNew__1->SetBinContent(10,17);
   probeNew__1->SetBinContent(11,33);
   probeNew__1->SetBinContent(12,6);
   probeNew__1->SetBinContent(13,7);
   probeNew__1->SetEntries(185);
   probeNew__1->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__1->GetXaxis()->SetRange(1,13);
   probeNew__1->GetXaxis()->SetLabelFont(42);
   probeNew__1->GetXaxis()->SetTitleOffset(1);
   probeNew__1->GetXaxis()->SetTitleFont(42);
   probeNew__1->GetYaxis()->SetTitle("Events/Bin");
   probeNew__1->GetYaxis()->SetLabelFont(42);
   probeNew__1->GetYaxis()->SetTitleFont(42);
   probeNew__1->GetZaxis()->SetLabelFont(42);
   probeNew__1->GetZaxis()->SetTitleOffset(1);
   probeNew__1->GetZaxis()->SetTitleFont(42);
   probeNew__1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->Modified();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->cd();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b->SetSelected(SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_4b);
}
