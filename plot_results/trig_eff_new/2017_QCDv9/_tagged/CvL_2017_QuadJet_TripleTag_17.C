#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.1148553,1.171633,0.2171119);
   CvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   CvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   CvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__397 = new TH1D("_QuadJet_TripleTag_tagged_CvL__397","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(1,0.2030882);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(2,0.1307433);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(3,0.1436041);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(4,0.1445572);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(5,0.1389093);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(6,0.1430241);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(7,0.1556712);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(8,0.1590056);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(9,0.1759411);
   _QuadJet_TripleTag_tagged_CvL__397->SetBinContent(10,0.1917999);
   _QuadJet_TripleTag_tagged_CvL__397->SetEntries(1.586344);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5104");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.301");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__397->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__397);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvL__397->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__397->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__397->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvL__397->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__397->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvL__397->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__397->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__397->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
