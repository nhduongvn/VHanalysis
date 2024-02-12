#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b/ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b", "ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->Range(-400,-14.73213,2266.667,132.5892);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   Double_t xAxis8[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__8 = new TH1D("refNew__8","",13, xAxis8);
   refNew__8->SetBinContent(2,0.1082406);
   refNew__8->SetBinContent(3,18.28568);
   refNew__8->SetBinContent(4,63.03894);
   refNew__8->SetBinContent(5,92.3817);
   refNew__8->SetBinContent(6,95.30752);
   refNew__8->SetBinContent(7,88.75147);
   refNew__8->SetBinContent(8,74.87066);
   refNew__8->SetBinContent(9,57.5018);
   refNew__8->SetBinContent(10,47.73214);
   refNew__8->SetBinContent(11,112.2448);
   refNew__8->SetBinContent(12,47.274);
   refNew__8->SetBinContent(13,35.20909);
   refNew__8->SetBinContent(14,1.176047);
   refNew__8->SetBinError(2,0.06300393);
   refNew__8->SetBinError(3,0.8236815);
   refNew__8->SetBinError(4,1.568555);
   refNew__8->SetBinError(5,1.941255);
   refNew__8->SetBinError(6,2.00795);
   refNew__8->SetBinError(7,1.96747);
   refNew__8->SetBinError(8,1.825278);
   refNew__8->SetBinError(9,1.595107);
   refNew__8->SetBinError(10,1.458807);
   refNew__8->SetBinError(11,2.248555);
   refNew__8->SetBinError(12,1.493998);
   refNew__8->SetBinError(13,1.348152);
   refNew__8->SetBinError(14,0.2905922);
   refNew__8->SetEntries(17799);
   refNew__8->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__8->GetXaxis()->SetRange(1,13);
   refNew__8->GetXaxis()->SetLabelFont(42);
   refNew__8->GetXaxis()->SetTitleOffset(1);
   refNew__8->GetXaxis()->SetTitleFont(42);
   refNew__8->GetYaxis()->SetTitle("Events/Bin");
   refNew__8->GetYaxis()->SetLabelFont(42);
   refNew__8->GetYaxis()->SetTitleFont(42);
   refNew__8->GetZaxis()->SetLabelFont(42);
   refNew__8->GetZaxis()->SetTitleOffset(1);
   refNew__8->GetZaxis()->SetTitleFont(42);
   refNew__8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->Modified();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->cd();
   ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetSelected(ttbar_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b);
}
