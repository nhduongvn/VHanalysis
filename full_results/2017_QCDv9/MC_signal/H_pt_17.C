#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_17()
{
//=========Macro generated from canvas: H_pt_17/H_pt_17
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_pt_17 = new TCanvas("H_pt_17", "H_pt_17",0,0,600,600);
   H_pt_17->SetHighLightColor(2);
   H_pt_17->Range(37.97653,-0.2755292,1705.96,2.020547);
   H_pt_17->SetFillColor(0);
   H_pt_17->SetFillStyle(4000);
   H_pt_17->SetBorderMode(0);
   H_pt_17->SetBorderSize(2);
   H_pt_17->SetLeftMargin(0.15709);
   H_pt_17->SetRightMargin(0.1234783);
   H_pt_17->SetBottomMargin(0.12);
   H_pt_17->SetFrameFillStyle(1000);
   H_pt_17->SetFrameBorderMode(0);
   H_pt_17->SetFrameFillStyle(1000);
   H_pt_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",40,0,2000);
   st_stack_57->SetMinimum(0);
   st_stack_57->SetMaximum(1.79094);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_57->GetXaxis()->SetRange(7,30);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetTitleOffset(1);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Events/50.0");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetTitleSize(0.037);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetTitleOffset(1);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_MC_H_pt_stack_1 = new TH1D("VbbHcc_MC_H_pt_stack_1","",40,0,2000);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(1,55.26985);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(2,68.01932);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(3,32.58007);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(4,13.08075);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(5,5.5389);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(6,2.471944);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(7,1.256199);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(8,0.6518448);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(9,0.3893378);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(10,0.2092537);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(11,0.1323695);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(12,0.07208797);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(13,0.04813787);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(14,0.02407575);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(15,0.03397197);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(16,0.01314251);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(17,0.007289901);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(18,0.001991154);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(19,0.00561449);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(20,0.007266092);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(24,0.0019888);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(26,0.002506535);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(30,0.000649994);
   VbbHcc_MC_H_pt_stack_1->SetBinError(1,0.3325194);
   VbbHcc_MC_H_pt_stack_1->SetBinError(2,0.3647775);
   VbbHcc_MC_H_pt_stack_1->SetBinError(3,0.249761);
   VbbHcc_MC_H_pt_stack_1->SetBinError(4,0.1573527);
   VbbHcc_MC_H_pt_stack_1->SetBinError(5,0.1020958);
   VbbHcc_MC_H_pt_stack_1->SetBinError(6,0.0678836);
   VbbHcc_MC_H_pt_stack_1->SetBinError(7,0.04885688);
   VbbHcc_MC_H_pt_stack_1->SetBinError(8,0.03499587);
   VbbHcc_MC_H_pt_stack_1->SetBinError(9,0.02705797);
   VbbHcc_MC_H_pt_stack_1->SetBinError(10,0.02053315);
   VbbHcc_MC_H_pt_stack_1->SetBinError(11,0.01592614);
   VbbHcc_MC_H_pt_stack_1->SetBinError(12,0.01183915);
   VbbHcc_MC_H_pt_stack_1->SetBinError(13,0.01025927);
   VbbHcc_MC_H_pt_stack_1->SetBinError(14,0.006941147);
   VbbHcc_MC_H_pt_stack_1->SetBinError(15,0.008244667);
   VbbHcc_MC_H_pt_stack_1->SetBinError(16,0.005021828);
   VbbHcc_MC_H_pt_stack_1->SetBinError(17,0.00366269);
   VbbHcc_MC_H_pt_stack_1->SetBinError(18,0.001991154);
   VbbHcc_MC_H_pt_stack_1->SetBinError(19,0.003255583);
   VbbHcc_MC_H_pt_stack_1->SetBinError(20,0.00365267);
   VbbHcc_MC_H_pt_stack_1->SetBinError(24,0.0019888);
   VbbHcc_MC_H_pt_stack_1->SetBinError(26,0.001772388);
   VbbHcc_MC_H_pt_stack_1->SetBinError(30,0.000649994);
   VbbHcc_MC_H_pt_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_H_pt_stack_2 = new TH1D("VbbHcc_MC_H_pt_stack_2","",40,0,2000);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(1,1.848584);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(2,5.593316);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(3,7.882143);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(4,5.278957);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(5,2.363488);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(6,1.032349);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(7,0.4494577);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(8,0.2080408);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(9,0.09004248);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(10,0.04701864);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(11,0.02219135);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(12,0.01089928);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(13,0.005016646);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(14,0.00288138);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(15,0.002435963);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(16,0.0004763507);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(18,0.0001909395);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(19,0.0001368629);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(20,0.0002468805);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(27,0.0002225569);
   VbbHcc_MC_H_pt_stack_2->SetBinError(1,0.0210984);
   VbbHcc_MC_H_pt_stack_2->SetBinError(2,0.03669095);
   VbbHcc_MC_H_pt_stack_2->SetBinError(3,0.04355512);
   VbbHcc_MC_H_pt_stack_2->SetBinError(4,0.03563364);
   VbbHcc_MC_H_pt_stack_2->SetBinError(5,0.02376313);
   VbbHcc_MC_H_pt_stack_2->SetBinError(6,0.01566097);
   VbbHcc_MC_H_pt_stack_2->SetBinError(7,0.01033193);
   VbbHcc_MC_H_pt_stack_2->SetBinError(8,0.007025895);
   VbbHcc_MC_H_pt_stack_2->SetBinError(9,0.004609118);
   VbbHcc_MC_H_pt_stack_2->SetBinError(10,0.003348738);
   VbbHcc_MC_H_pt_stack_2->SetBinError(11,0.002288505);
   VbbHcc_MC_H_pt_stack_2->SetBinError(12,0.001601053);
   VbbHcc_MC_H_pt_stack_2->SetBinError(13,0.001080654);
   VbbHcc_MC_H_pt_stack_2->SetBinError(14,0.0008186679);
   VbbHcc_MC_H_pt_stack_2->SetBinError(15,0.000774075);
   VbbHcc_MC_H_pt_stack_2->SetBinError(16,0.0003492847);
   VbbHcc_MC_H_pt_stack_2->SetBinError(18,0.0001909395);
   VbbHcc_MC_H_pt_stack_2->SetBinError(19,0.0001368629);
   VbbHcc_MC_H_pt_stack_2->SetBinError(20,0.0002468805);
   VbbHcc_MC_H_pt_stack_2->SetBinError(27,0.0002225569);
   VbbHcc_MC_H_pt_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_17->Modified();
   H_pt_17->cd();
   H_pt_17->SetSelected(H_pt_17);
}
