#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_ideal_ref/CvL_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("CvL_2016_QuadJet_TripleTag_16_ideal_ref", "CvL_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->Range(-0.2,1.881725,1.133333,3.53722);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL_ref__45 = new TH1D("_QuadJet_TripleTag_ideal_CvL_ref__45","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(1,519);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(2,271);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(3,223);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(4,256);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(5,237);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(6,275);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(7,297);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(8,425);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(9,623);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(10,1242);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetEntries(4368);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4368   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6203");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3278");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL_ref__45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   CvL_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(CvL_2016_QuadJet_TripleTag_16_ideal_ref);
}
