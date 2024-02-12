#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2016_combo_16_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2016_combo_16_3b/SingleMuon_HT_Nevt_trigger_2016_combo_16_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2016_combo_16_3b = new TCanvas("SingleMuon_HT_Nevt_trigger_2016_combo_16_3b", "SingleMuon_HT_Nevt_trigger_2016_combo_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->Range(-400,-57.35625,2266.667,516.2063);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetFrameBorderMode(0);
   Double_t xAxis29[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__29 = new TH1D("probeNew__29","",13, xAxis29);
   probeNew__29->SetBinContent(3,52);
   probeNew__29->SetBinContent(4,258);
   probeNew__29->SetBinContent(5,434);
   probeNew__29->SetBinContent(6,437);
   probeNew__29->SetBinContent(7,333);
   probeNew__29->SetBinContent(8,271);
   probeNew__29->SetBinContent(9,202);
   probeNew__29->SetBinContent(10,133);
   probeNew__29->SetBinContent(11,297);
   probeNew__29->SetBinContent(12,109);
   probeNew__29->SetBinContent(13,78);
   probeNew__29->SetBinContent(14,1);
   probeNew__29->SetEntries(2605);
   probeNew__29->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__29->GetXaxis()->SetRange(1,13);
   probeNew__29->GetXaxis()->SetLabelFont(42);
   probeNew__29->GetXaxis()->SetTitleOffset(1);
   probeNew__29->GetXaxis()->SetTitleFont(42);
   probeNew__29->GetYaxis()->SetTitle("Events/Bin");
   probeNew__29->GetYaxis()->SetLabelFont(42);
   probeNew__29->GetYaxis()->SetTitleFont(42);
   probeNew__29->GetZaxis()->SetLabelFont(42);
   probeNew__29->GetZaxis()->SetTitleOffset(1);
   probeNew__29->GetZaxis()->SetTitleFont(42);
   probeNew__29->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->Modified();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->cd();
   SingleMuon_HT_Nevt_trigger_2016_combo_16_3b->SetSelected(SingleMuon_HT_Nevt_trigger_2016_combo_16_3b);
}
