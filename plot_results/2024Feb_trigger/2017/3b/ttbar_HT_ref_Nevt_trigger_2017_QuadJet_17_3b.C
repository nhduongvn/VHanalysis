#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b/ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b", "ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->Range(-400,-572.8896,2266.667,5156.006);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   Double_t xAxis36[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__36 = new TH1D("refNew__36","",13, xAxis36);
   refNew__36->SetBinContent(2,16.59273);
   refNew__36->SetBinContent(3,1274.365);
   refNew__36->SetBinContent(4,3644.402);
   refNew__36->SetBinContent(5,4364.873);
   refNew__36->SetBinContent(6,3865.661);
   refNew__36->SetBinContent(7,3120.995);
   refNew__36->SetBinContent(8,2390.559);
   refNew__36->SetBinContent(9,1771.685);
   refNew__36->SetBinContent(10,1344.964);
   refNew__36->SetBinContent(11,2740.493);
   refNew__36->SetBinContent(12,884.7163);
   refNew__36->SetBinContent(13,559.2311);
   refNew__36->SetBinContent(14,14.45733);
   refNew__36->SetBinError(2,0.7466501);
   refNew__36->SetBinError(3,7.0381);
   refNew__36->SetBinError(4,12.7547);
   refNew__36->SetBinError(5,14.7158);
   refNew__36->SetBinError(6,14.2856);
   refNew__36->SetBinError(7,13.20381);
   refNew__36->SetBinError(8,11.78285);
   refNew__36->SetBinError(9,10.32183);
   refNew__36->SetBinError(10,9.218424);
   refNew__36->SetBinError(11,13.49162);
   refNew__36->SetBinError(12,7.684448);
   refNew__36->SetBinError(13,6.132106);
   refNew__36->SetBinError(14,1.086849);
   refNew__36->SetEntries(643664);
   refNew__36->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__36->GetXaxis()->SetRange(1,13);
   refNew__36->GetXaxis()->SetLabelFont(42);
   refNew__36->GetXaxis()->SetTitleOffset(1);
   refNew__36->GetXaxis()->SetTitleFont(42);
   refNew__36->GetYaxis()->SetTitle("Events/Bin");
   refNew__36->GetYaxis()->SetLabelFont(42);
   refNew__36->GetYaxis()->SetTitleFont(42);
   refNew__36->GetZaxis()->SetLabelFont(42);
   refNew__36->GetZaxis()->SetTitleOffset(1);
   refNew__36->GetZaxis()->SetTitleFont(42);
   refNew__36->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->Modified();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->cd();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetSelected(ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_3b);
}
