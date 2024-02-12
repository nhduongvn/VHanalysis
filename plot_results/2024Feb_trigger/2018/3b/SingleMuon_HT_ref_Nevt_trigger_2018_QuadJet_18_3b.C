#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b/SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b", "SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->Range(-400,-433.9125,2266.667,3905.213);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFrameBorderMode(0);
   Double_t xAxis38[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__38 = new TH1D("refNew__38","",13, xAxis38);
   refNew__38->SetBinContent(2,20);
   refNew__38->SetBinContent(3,1220);
   refNew__38->SetBinContent(4,3035);
   refNew__38->SetBinContent(5,3306);
   refNew__38->SetBinContent(6,2975);
   refNew__38->SetBinContent(7,2318);
   refNew__38->SetBinContent(8,1746);
   refNew__38->SetBinContent(9,1290);
   refNew__38->SetBinContent(10,875);
   refNew__38->SetBinContent(11,1849);
   refNew__38->SetBinContent(12,589);
   refNew__38->SetBinContent(13,360);
   refNew__38->SetBinContent(14,5);
   refNew__38->SetEntries(19588);
   refNew__38->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__38->GetXaxis()->SetRange(1,13);
   refNew__38->GetXaxis()->SetLabelFont(42);
   refNew__38->GetXaxis()->SetTitleOffset(1);
   refNew__38->GetXaxis()->SetTitleFont(42);
   refNew__38->GetYaxis()->SetTitle("Events/Bin");
   refNew__38->GetYaxis()->SetLabelFont(42);
   refNew__38->GetYaxis()->SetTitleFont(42);
   refNew__38->GetZaxis()->SetLabelFont(42);
   refNew__38->GetZaxis()->SetTitleOffset(1);
   refNew__38->GetZaxis()->SetTitleFont(42);
   refNew__38->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_3b);
}
