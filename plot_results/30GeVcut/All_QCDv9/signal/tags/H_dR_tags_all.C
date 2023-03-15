#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Tue Feb 14 15:57:08 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-1.214935,7.264125,8.909521);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.897076);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(7.897076);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,0.9495592);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1.918829);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,2.382572);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,3.300849);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,3.658907);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,3.707642);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,3.803905);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,3.875051);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,3.753951);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,3.724802);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,3.864518);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,3.963876);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,4.03608);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,4.20447);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,1.559011);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,0.7838002);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,0.5067477);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,0.2886607);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,0.1952298);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,0.1398279);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,0.0950579);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,0.0578971);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,0.03015096);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,0.006806866);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,0.002700465);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,0.05042488);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,0.0714855);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,0.07766725);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,0.1000179);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,0.09601417);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,0.09985589);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,0.09814039);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,0.09995043);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,0.1005839);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,0.09754204);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,0.101033);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,0.101968);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,0.1010981);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,0.1047957);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,0.06286786);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,0.04441936);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,0.0346449);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,0.02636609);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,0.02108478);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,0.01849283);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,0.01596799);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,0.01157137);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,0.008166693);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,0.003730268);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,0.002700465);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,0.3145441);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,0.6208327);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,0.8909028);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,1.263143);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,1.530574);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,1.483896);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,1.348511);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,1.167917);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,0.9464834);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,0.9496154);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,0.9602486);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,0.9737532);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,1.055217);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,1.060247);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,0.5098616);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,0.3174175);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,0.199947);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,0.1313376);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,0.09364035);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,0.05016604);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,0.0351863);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,0.02279685);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,0.01635724);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,0.007865931);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,0.003113998);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,0.002347679);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,0.0002658739);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,0.01063813);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,0.01980987);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,0.01698698);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,0.0213582);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,0.02285337);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,0.02189792);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,0.02094179);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,0.01963969);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,0.0174298);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,0.01756645);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,0.02225472);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,0.01768478);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,0.01868833);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,0.0192055);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,0.01327103);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,0.01047599);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,0.008016049);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,0.006499286);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,0.005674061);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,0.004057793);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,0.003342251);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,0.002962769);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,0.002344101);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,0.00160273);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,0.001018714);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,0.000909096);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,0.0002658739);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
