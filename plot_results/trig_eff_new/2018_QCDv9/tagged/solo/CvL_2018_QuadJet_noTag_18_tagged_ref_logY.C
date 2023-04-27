#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_tagged_ref/CvL_2018_QuadJet_noTag_18_tagged_ref
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_tagged_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_tagged_ref", "CvL_2018_QuadJet_noTag_18_tagged_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_tagged_ref->Range(-0.2,3.447261,1.133333,5.197308);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL_ref__102 = new TH1D("_QuadJet_noTag_tagged_CvL_ref__102","",10,0,1);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(1,24998);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(2,55559);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(3,16870);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(4,10471);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(5,8495);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(6,8381);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(7,9735);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(8,13035);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(9,19950);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(10,46522);
   _QuadJet_noTag_tagged_CvL_ref__102->SetEntries(214016);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 214016 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4826");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3563");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL_ref__102->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL_ref__102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL_ref__102->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_tagged_ref->Modified();
   CvL_2018_QuadJet_noTag_18_tagged_ref->cd();
   CvL_2018_QuadJet_noTag_18_tagged_ref->SetSelected(CvL_2018_QuadJet_noTag_18_tagged_ref);
}
