#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18/pt_jet3_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18", "pt_jet3_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18->Range(-100,-0.8004533,566.6667,4.193779);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__74 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__74","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(5,867);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(6,2586);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(7,2611);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(8,2143);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(9,1417);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(10,951);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(11,639);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(12,400);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(13,285);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(14,197);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(15,108);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(16,99);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(17,49);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(18,35);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(19,24);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(20,25);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(21,23);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(22,4);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(23,5);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(24,5);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(25,2);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(26,3);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(27,2);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(28,4);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(34,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetEntries(12489);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12489  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.26");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   26.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__74);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18->cd();
   pt_jet3_2018_QuadJet_TripleTag_18->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18);
}
