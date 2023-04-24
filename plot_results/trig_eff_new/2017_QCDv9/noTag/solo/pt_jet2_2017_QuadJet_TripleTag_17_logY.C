#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-100,-0.8146113,566.6667,4.321202);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__62 = new TH1D("_QuadJet_TripleTag_pt_jet2__62","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(5,131);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(6,1504);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(7,2943);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(8,3389);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(9,3142);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(10,2389);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(11,1667);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(12,1241);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(13,877);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(14,642);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(15,488);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(16,343);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(17,241);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(18,182);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(19,109);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(20,123);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(21,79);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(22,54);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(23,42);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(24,32);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(25,23);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(26,15);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(27,20);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(28,24);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(29,10);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(30,5);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(31,9);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(32,3);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(33,7);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(34,3);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(35,3);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(36,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(42,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(44,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(46,1);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(49,2);
   _QuadJet_TripleTag_pt_jet2__62->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet2__62->SetEntries(19754);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19754  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  94.39");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.34");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__62->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__62);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__62->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__62->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__62->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__62->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
