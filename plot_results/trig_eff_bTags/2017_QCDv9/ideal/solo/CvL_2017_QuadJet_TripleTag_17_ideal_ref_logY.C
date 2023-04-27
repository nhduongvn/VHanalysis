#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17_ideal_ref/CvL_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("CvL_2017_QuadJet_TripleTag_17_ideal_ref", "CvL_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->Range(-0.2,1.84939,1.133333,3.628986);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL_ref__153 = new TH1D("_QuadJet_TripleTag_ideal_CvL_ref__153","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(1,582);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(2,224);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(3,213);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(4,213);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(5,227);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(6,239);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(7,295);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(8,413);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(9,631);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(10,1491);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetEntries(4528);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4528   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6412");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3337");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL_ref__153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(CvL_2017_QuadJet_TripleTag_17_ideal_ref);
}
