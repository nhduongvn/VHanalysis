#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_signal_17()
{
//=========Macro generated from canvas: Z_pt_signal_17/Z_pt_signal_17
//=========  (Fri Mar 10 11:21:20 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_signal_17 = new TCanvas("Z_pt_signal_17", "Z_pt_signal_17",0,0,600,600);
   Z_pt_signal_17->SetHighLightColor(2);
   Z_pt_signal_17->Range(37.97653,-12.55641,1705.96,92.08037);
   Z_pt_signal_17->SetFillColor(0);
   Z_pt_signal_17->SetFillStyle(4000);
   Z_pt_signal_17->SetBorderMode(0);
   Z_pt_signal_17->SetBorderSize(2);
   Z_pt_signal_17->SetLeftMargin(0.15709);
   Z_pt_signal_17->SetRightMargin(0.1234783);
   Z_pt_signal_17->SetBottomMargin(0.12);
   Z_pt_signal_17->SetFrameFillStyle(1000);
   Z_pt_signal_17->SetFrameBorderMode(0);
   Z_pt_signal_17->SetFrameFillStyle(1000);
   Z_pt_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(81.61669);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",40,0,2000);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(81.61669);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_63->GetXaxis()->SetRange(7,30);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_MC_Z_pt_stack_1 = new TH1D("VbbHcc_MC_Z_pt_stack_1","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(1,57.44204);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(2,67.74185);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(3,31.42149);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(4,12.71426);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(5,5.288953);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(6,2.467281);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(7,1.212271);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(8,0.6527863);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(9,0.3673983);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(10,0.1969235);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(11,0.1055262);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(12,0.07420176);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(13,0.05449212);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(14,0.01168087);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(15,0.02578655);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(16,0.01511647);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(17,0.004192107);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(18,0.005354414);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(19,0.003615951);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(20,0.004401053);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(21,0.003795888);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(24,0.0019888);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(25,0.001252655);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(26,0.00125388);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(30,0.000649994);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(1,0.3384332);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(2,0.3640982);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(3,0.2455867);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(4,0.1549935);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(5,0.09985608);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(6,0.06800295);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(7,0.04783357);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(8,0.03486073);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(9,0.02626904);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(10,0.02008131);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(11,0.01452939);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(12,0.01196582);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(13,0.01077489);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(14,0.005058914);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(15,0.007163347);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(16,0.005398325);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(17,0.002970966);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(18,0.003110666);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(19,0.002569953);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(20,0.003125099);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(21,0.002684229);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(24,0.0019888);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(25,0.001252655);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(26,0.00125388);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(30,0.000649994);
   VbbHcc_MC_Z_pt_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_pt_stack_2 = new TH1D("VbbHcc_MC_Z_pt_stack_2","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(1,1.84478);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(2,5.663645);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(3,8.113573);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(4,5.208204);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(5,2.275585);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(6,0.9635999);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(7,0.4149451);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(8,0.1866527);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(9,0.08108725);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(10,0.0397121);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(11,0.02506277);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(12,0.007559496);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(13,0.007321344);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(14,0.001866287);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(15,0.00110383);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(16,0.001140625);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(17,0.0007610979);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(18,0.0003108022);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(19,0.0009411312);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(22,0.0002428668);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(1,0.0210952);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(2,0.03690958);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(3,0.04418919);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(4,0.03537254);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(5,0.02331024);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(6,0.01515445);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(7,0.00992264);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(8,0.006642378);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(9,0.004394955);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(10,0.003084808);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(11,0.002541017);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(12,0.00133203);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(13,0.001305711);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(14,0.0006835915);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(15,0.0005043421);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(16,0.0005731396);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(17,0.0004396744);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(18,0.0003108022);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(19,0.0004740187);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(22,0.0002428668);
   VbbHcc_MC_Z_pt_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_signal_17->Modified();
   Z_pt_signal_17->cd();
   Z_pt_signal_17->SetSelected(Z_pt_signal_17);
}
