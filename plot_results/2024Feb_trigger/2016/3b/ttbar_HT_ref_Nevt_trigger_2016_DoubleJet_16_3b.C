#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b/ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b", "ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->Range(-400,-320.0899,2266.667,2880.809);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetFrameBorderMode(0);
   Double_t xAxis28[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__28 = new TH1D("refNew__28","",13, xAxis28);
   refNew__28->SetBinContent(2,10.27603);
   refNew__28->SetBinContent(3,766.2262);
   refNew__28->SetBinContent(4,2076.7);
   refNew__28->SetBinContent(5,2438.78);
   refNew__28->SetBinContent(6,2217.85);
   refNew__28->SetBinContent(7,1793.63);
   refNew__28->SetBinContent(8,1379.73);
   refNew__28->SetBinContent(9,1021.107);
   refNew__28->SetBinContent(10,752.7624);
   refNew__28->SetBinContent(11,1549.909);
   refNew__28->SetBinContent(12,541.3463);
   refNew__28->SetBinContent(13,371.439);
   refNew__28->SetBinContent(14,12.34479);
   refNew__28->SetBinError(2,0.6152679);
   refNew__28->SetBinError(3,5.293298);
   refNew__28->SetBinError(4,8.878538);
   refNew__28->SetBinError(5,9.835289);
   refNew__28->SetBinError(6,9.562627);
   refNew__28->SetBinError(7,8.732933);
   refNew__28->SetBinError(8,7.735083);
   refNew__28->SetBinError(9,6.664015);
   refNew__28->SetBinError(10,5.721757);
   refNew__28->SetBinError(11,8.267188);
   refNew__28->SetBinError(12,4.999011);
   refNew__28->SetBinError(13,4.299619);
   refNew__28->SetBinError(14,0.9082542);
   refNew__28->SetEntries(375111);
   refNew__28->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__28->GetXaxis()->SetRange(1,13);
   refNew__28->GetXaxis()->SetLabelFont(42);
   refNew__28->GetXaxis()->SetTitleOffset(1);
   refNew__28->GetXaxis()->SetTitleFont(42);
   refNew__28->GetYaxis()->SetTitle("Events/Bin");
   refNew__28->GetYaxis()->SetLabelFont(42);
   refNew__28->GetYaxis()->SetTitleFont(42);
   refNew__28->GetZaxis()->SetLabelFont(42);
   refNew__28->GetZaxis()->SetTitleOffset(1);
   refNew__28->GetZaxis()->SetTitleFont(42);
   refNew__28->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->Modified();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->cd();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b->SetSelected(ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_3b);
}
