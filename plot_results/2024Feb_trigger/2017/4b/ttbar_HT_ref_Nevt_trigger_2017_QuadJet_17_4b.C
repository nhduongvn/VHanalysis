#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b/ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b", "ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->Range(-400,-30.19617,2266.667,271.7656);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   Double_t xAxis16[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__16 = new TH1D("refNew__16","",13, xAxis16);
   refNew__16->SetBinContent(2,0.4401644);
   refNew__16->SetBinContent(3,36.14687);
   refNew__16->SetBinContent(4,133.0686);
   refNew__16->SetBinContent(5,188.6471);
   refNew__16->SetBinContent(6,199.0123);
   refNew__16->SetBinContent(7,176.3622);
   refNew__16->SetBinContent(8,147.1738);
   refNew__16->SetBinContent(9,125.6721);
   refNew__16->SetBinContent(10,100.8963);
   refNew__16->SetBinContent(11,230.0661);
   refNew__16->SetBinContent(12,81.69353);
   refNew__16->SetBinContent(13,60.03296);
   refNew__16->SetBinContent(14,1.861306);
   refNew__16->SetBinError(2,0.1258429);
   refNew__16->SetBinError(3,1.267083);
   refNew__16->SetBinError(4,2.586051);
   refNew__16->SetBinError(5,3.310543);
   refNew__16->SetBinError(6,3.478603);
   refNew__16->SetBinError(7,3.432406);
   refNew__16->SetBinError(8,3.187396);
   refNew__16->SetBinError(9,3.065246);
   refNew__16->SetBinError(10,2.745534);
   refNew__16->SetBinError(11,4.369423);
   refNew__16->SetBinError(12,2.544412);
   refNew__16->SetBinError(13,2.124705);
   refNew__16->SetBinError(14,0.3933259);
   refNew__16->SetEntries(33879);
   refNew__16->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__16->GetXaxis()->SetRange(1,13);
   refNew__16->GetXaxis()->SetLabelFont(42);
   refNew__16->GetXaxis()->SetTitleOffset(1);
   refNew__16->GetXaxis()->SetTitleFont(42);
   refNew__16->GetYaxis()->SetTitle("Events/Bin");
   refNew__16->GetYaxis()->SetLabelFont(42);
   refNew__16->GetYaxis()->SetTitleFont(42);
   refNew__16->GetZaxis()->SetLabelFont(42);
   refNew__16->GetZaxis()->SetTitleOffset(1);
   refNew__16->GetZaxis()->SetTitleFont(42);
   refNew__16->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->Modified();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->cd();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetSelected(ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_4b);
}
