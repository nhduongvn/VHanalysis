#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_tagged/pt_jet3_2016_QuadJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_tagged", "pt_jet3_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->Range(-100,-0.6552614,566.6667,2.887053);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet3__149 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet3__149","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(5,71);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(6,180);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(7,148);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(8,103);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(9,69);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(10,44);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(11,28);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(12,18);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(13,15);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(14,7);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(15,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(16,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(17,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(18,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(19,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(20,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(22,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetBinContent(24,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetEntries(695);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 695    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.81");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.62");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet3__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet3__149->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__149->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_tagged);
}
