#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c/ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c = new TCanvas("ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c", "ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->Range(-400,-766.615,2266.667,6899.535);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   Double_t xAxis56[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__56 = new TH1D("refNew__56","",13, xAxis56);
   refNew__56->SetBinContent(2,19.26474);
   refNew__56->SetBinContent(3,1569.262);
   refNew__56->SetBinContent(4,4693.844);
   refNew__56->SetBinContent(5,5840.876);
   refNew__56->SetBinContent(6,5426.992);
   refNew__56->SetBinContent(7,4489.961);
   refNew__56->SetBinContent(8,3566.21);
   refNew__56->SetBinContent(9,2784.149);
   refNew__56->SetBinContent(10,2138.552);
   refNew__56->SetBinContent(11,4553.924);
   refNew__56->SetBinContent(12,1530.104);
   refNew__56->SetBinContent(13,999.827);
   refNew__56->SetBinContent(14,19.61231);
   refNew__56->SetBinError(2,0.8759576);
   refNew__56->SetBinError(3,8.317053);
   refNew__56->SetBinError(4,15.39496);
   refNew__56->SetBinError(5,18.03529);
   refNew__56->SetBinError(6,17.94002);
   refNew__56->SetBinError(7,16.54013);
   refNew__56->SetBinError(8,14.99926);
   refNew__56->SetBinError(9,13.4862);
   refNew__56->SetBinError(10,11.97557);
   refNew__56->SetBinError(11,17.72931);
   refNew__56->SetBinError(12,10.22707);
   refNew__56->SetBinError(13,8.346056);
   refNew__56->SetBinError(14,1.20749);
   refNew__56->SetEntries(853790);
   refNew__56->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__56->GetXaxis()->SetRange(1,13);
   refNew__56->GetXaxis()->SetLabelFont(42);
   refNew__56->GetXaxis()->SetTitleOffset(1);
   refNew__56->GetXaxis()->SetTitleFont(42);
   refNew__56->GetYaxis()->SetTitle("Events/Bin");
   refNew__56->GetYaxis()->SetLabelFont(42);
   refNew__56->GetYaxis()->SetTitleFont(42);
   refNew__56->GetZaxis()->SetLabelFont(42);
   refNew__56->GetZaxis()->SetTitleOffset(1);
   refNew__56->GetZaxis()->SetTitleFont(42);
   refNew__56->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->Modified();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->cd();
   ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetSelected(ttbar_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c);
}
