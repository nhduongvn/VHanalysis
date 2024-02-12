#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b/ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b = new TCanvas("ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b", "ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->Range(-400,-62.03672,2266.667,558.3304);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   Double_t xAxis20[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__20 = new TH1D("refNew__20","",13, xAxis20);
   refNew__20->SetBinContent(2,0.6309078);
   refNew__20->SetBinContent(3,88.67866);
   refNew__20->SetBinContent(4,303.7559);
   refNew__20->SetBinContent(5,460.6745);
   refNew__20->SetBinContent(6,446.6563);
   refNew__20->SetBinContent(7,389.7867);
   refNew__20->SetBinContent(8,319.3673);
   refNew__20->SetBinContent(9,273.2919);
   refNew__20->SetBinContent(10,203.8077);
   refNew__20->SetBinContent(11,472.6607);
   refNew__20->SetBinContent(12,169.8913);
   refNew__20->SetBinContent(13,126.7252);
   refNew__20->SetBinContent(14,3.428154);
   refNew__20->SetBinError(2,0.269328);
   refNew__20->SetBinError(3,2.824542);
   refNew__20->SetBinError(4,5.731231);
   refNew__20->SetBinError(5,11.03012);
   refNew__20->SetBinError(6,7.443306);
   refNew__20->SetBinError(7,6.456237);
   refNew__20->SetBinError(8,6.007219);
   refNew__20->SetBinError(9,5.736056);
   refNew__20->SetBinError(10,4.763752);
   refNew__20->SetBinError(11,7.963481);
   refNew__20->SetBinError(12,4.385228);
   refNew__20->SetBinError(13,4.246958);
   refNew__20->SetBinError(14,0.5788461);
   refNew__20->SetEntries(42985);
   refNew__20->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__20->GetXaxis()->SetRange(1,13);
   refNew__20->GetXaxis()->SetLabelFont(42);
   refNew__20->GetXaxis()->SetTitleOffset(1);
   refNew__20->GetXaxis()->SetTitleFont(42);
   refNew__20->GetYaxis()->SetTitle("Events/Bin");
   refNew__20->GetYaxis()->SetLabelFont(42);
   refNew__20->GetYaxis()->SetTitleFont(42);
   refNew__20->GetZaxis()->SetLabelFont(42);
   refNew__20->GetZaxis()->SetTitleOffset(1);
   refNew__20->GetZaxis()->SetTitleFont(42);
   refNew__20->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->Modified();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->cd();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetSelected(ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_4b);
}
