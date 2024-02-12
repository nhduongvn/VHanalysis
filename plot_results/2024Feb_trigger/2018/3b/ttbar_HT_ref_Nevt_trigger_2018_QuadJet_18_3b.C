#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b/ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b", "ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->Range(-400,-1342.996,2266.667,12086.97);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetFrameBorderMode(0);
   Double_t xAxis40[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__40 = new TH1D("refNew__40","",13, xAxis40);
   refNew__40->SetBinContent(2,35.34046);
   refNew__40->SetBinContent(3,3021.724);
   refNew__40->SetBinContent(4,8780.835);
   refNew__40->SetBinContent(5,10232.35);
   refNew__40->SetBinContent(6,9024.39);
   refNew__40->SetBinContent(7,7079.769);
   refNew__40->SetBinContent(8,5309.062);
   refNew__40->SetBinContent(9,3931.803);
   refNew__40->SetBinContent(10,2930.813);
   refNew__40->SetBinContent(11,5787.655);
   refNew__40->SetBinContent(12,1883.432);
   refNew__40->SetBinContent(13,1167.706);
   refNew__40->SetBinContent(14,25.52573);
   refNew__40->SetBinError(2,1.536521);
   refNew__40->SetBinError(3,18.93914);
   refNew__40->SetBinError(4,28.91157);
   refNew__40->SetBinError(5,33.226);
   refNew__40->SetBinError(6,31.16414);
   refNew__40->SetBinError(7,27.41738);
   refNew__40->SetBinError(8,24.1047);
   refNew__40->SetBinError(9,20.42223);
   refNew__40->SetBinError(10,18.30039);
   refNew__40->SetBinError(11,25.90586);
   refNew__40->SetBinError(12,17.2791);
   refNew__40->SetBinError(13,11.35129);
   refNew__40->SetBinError(14,1.648993);
   refNew__40->SetEntries(838026);
   refNew__40->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__40->GetXaxis()->SetRange(1,13);
   refNew__40->GetXaxis()->SetLabelFont(42);
   refNew__40->GetXaxis()->SetTitleOffset(1);
   refNew__40->GetXaxis()->SetTitleFont(42);
   refNew__40->GetYaxis()->SetTitle("Events/Bin");
   refNew__40->GetYaxis()->SetLabelFont(42);
   refNew__40->GetYaxis()->SetTitleFont(42);
   refNew__40->GetZaxis()->SetLabelFont(42);
   refNew__40->GetZaxis()->SetTitleOffset(1);
   refNew__40->GetZaxis()->SetTitleFont(42);
   refNew__40->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->Modified();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->cd();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b->SetSelected(ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_3b);
}
