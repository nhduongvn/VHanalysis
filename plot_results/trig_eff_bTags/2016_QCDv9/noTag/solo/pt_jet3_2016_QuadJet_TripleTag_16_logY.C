#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16/pt_jet3_2016_QuadJet_TripleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16", "pt_jet3_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16->Range(-100,-0.9129168,566.6667,5.205951);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__38 = new TH1D("_QuadJet_TripleTag_pt_jet3__38","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(5,9865);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(6,20726);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(7,14642);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(8,8973);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(9,5461);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(10,3214);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(11,2081);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(12,1342);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(13,830);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(14,596);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(15,329);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(16,242);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(17,169);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(18,120);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(19,77);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(20,42);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(21,36);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(22,31);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(23,31);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(24,11);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(25,12);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(26,12);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(27,12);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(28,6);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(29,6);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(30,6);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(31,3);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(32,4);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(33,2);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(37,1);
   _QuadJet_TripleTag_pt_jet3__38->SetBinContent(38,1);
   _QuadJet_TripleTag_pt_jet3__38->SetEntries(68883);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68883  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  68.79");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.22");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3__38->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__38->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__38->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__38->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16->cd();
   pt_jet3_2016_QuadJet_TripleTag_16->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16);
}
