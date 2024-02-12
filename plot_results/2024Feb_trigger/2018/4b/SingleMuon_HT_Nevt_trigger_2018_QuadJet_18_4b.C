#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b/SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b = new TCanvas("SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b", "SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->Range(-400,-16.5375,2266.667,148.8375);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   Double_t xAxis17[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__17 = new TH1D("probeNew__17","",13, xAxis17);
   probeNew__17->SetBinContent(4,10);
   probeNew__17->SetBinContent(5,55);
   probeNew__17->SetBinContent(6,112);
   probeNew__17->SetBinContent(7,101);
   probeNew__17->SetBinContent(8,92);
   probeNew__17->SetBinContent(9,78);
   probeNew__17->SetBinContent(10,69);
   probeNew__17->SetBinContent(11,126);
   probeNew__17->SetBinContent(12,50);
   probeNew__17->SetBinContent(13,28);
   probeNew__17->SetEntries(721);
   probeNew__17->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__17->GetXaxis()->SetRange(1,13);
   probeNew__17->GetXaxis()->SetLabelFont(42);
   probeNew__17->GetXaxis()->SetTitleOffset(1);
   probeNew__17->GetXaxis()->SetTitleFont(42);
   probeNew__17->GetYaxis()->SetTitle("Events/Bin");
   probeNew__17->GetYaxis()->SetLabelFont(42);
   probeNew__17->GetYaxis()->SetTitleFont(42);
   probeNew__17->GetZaxis()->SetLabelFont(42);
   probeNew__17->GetZaxis()->SetTitleOffset(1);
   probeNew__17->GetZaxis()->SetTitleFont(42);
   probeNew__17->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->Modified();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->cd();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b->SetSelected(SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_4b);
}
