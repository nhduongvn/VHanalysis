#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-100,-0.727416,566.6667,3.536444);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__278 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__278","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(5,16);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(6,238);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(7,583);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(8,680);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(9,656);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(10,547);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(11,365);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(12,274);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(13,232);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(14,159);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(15,132);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(16,99);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(17,73);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(18,41);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(19,46);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(20,35);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(21,29);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(22,15);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(23,8);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(24,6);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(25,9);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(26,4);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(27,4);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(28,4);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(29,2);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(30,3);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(31,2);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(33,3);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(35,2);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetBinContent(44,1);
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetEntries(4269);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4269   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  98.82");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.23");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__278);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__278->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__278->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__278->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
