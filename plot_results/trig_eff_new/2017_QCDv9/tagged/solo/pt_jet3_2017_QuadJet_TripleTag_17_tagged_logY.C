#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_tagged/pt_jet3_2017_QuadJet_TripleTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_tagged", "pt_jet3_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.7531799,566.6667,3.768319);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__74 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__74","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(5,364);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(6,1093);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(7,964);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(8,744);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(9,460);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(10,320);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(11,224);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(12,127);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(13,98);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(14,65);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(15,47);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(16,33);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(17,11);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(18,12);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(19,5);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(20,5);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(21,4);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(22,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(23,4);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(24,2);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(28,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetEntries(4585);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4585   ");
   ptstats_LaTex = ptstats->AddText("Mean  =   75.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.43");
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
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_tagged);
}
