#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2,2.944694,1.133333,4.863378);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLogy();
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__50 = new TH1D("_QuadJet_TripleTag_CvB__50","",10,0,1);
   _QuadJet_TripleTag_CvB__50->SetBinContent(1,24772);
   _QuadJet_TripleTag_CvB__50->SetBinContent(2,3526);
   _QuadJet_TripleTag_CvB__50->SetBinContent(3,3005);
   _QuadJet_TripleTag_CvB__50->SetBinContent(4,2739);
   _QuadJet_TripleTag_CvB__50->SetBinContent(5,3070);
   _QuadJet_TripleTag_CvB__50->SetBinContent(6,3702);
   _QuadJet_TripleTag_CvB__50->SetBinContent(7,5535);
   _QuadJet_TripleTag_CvB__50->SetBinContent(8,9466);
   _QuadJet_TripleTag_CvB__50->SetBinContent(9,19344);
   _QuadJet_TripleTag_CvB__50->SetBinContent(10,9393);
   _QuadJet_TripleTag_CvB__50->SetEntries(84552);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 84552  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4977");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.368");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB__50->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
