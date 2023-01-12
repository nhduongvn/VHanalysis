#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_16_logY()
{
//=========Macro generated from canvas: H_pt_algo_16/H_pt_algo_16
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_pt_algo_16 = new TCanvas("H_pt_algo_16", "H_pt_algo_16",0,0,600,600);
   H_pt_algo_16->SetHighLightColor(2);
   H_pt_algo_16->Range(-436.7058,-0.09985097,2343.266,0.7322405);
   H_pt_algo_16->SetFillColor(0);
   H_pt_algo_16->SetFillStyle(4000);
   H_pt_algo_16->SetBorderMode(0);
   H_pt_algo_16->SetBorderSize(2);
   H_pt_algo_16->SetLogy();
   H_pt_algo_16->SetLeftMargin(0.15709);
   H_pt_algo_16->SetRightMargin(0.1234783);
   H_pt_algo_16->SetBottomMargin(0.12);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(49.05496);
   
   TH1F *st_stack_69 = new TH1F("st_stack_69","",40,0,2000);
   st_stack_69->SetMinimum(-3.169915e+09);
   st_stack_69->SetMaximum(-32.46768);
   st_stack_69->SetDirectory(0);
   st_stack_69->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_69->SetLineColor(ci);
   st_stack_69->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_69->GetXaxis()->SetRange(7,30);
   st_stack_69->GetXaxis()->SetLabelFont(42);
   st_stack_69->GetXaxis()->SetTitleOffset(1);
   st_stack_69->GetXaxis()->SetTitleFont(42);
   st_stack_69->GetYaxis()->SetTitle("Events/50.0");
   st_stack_69->GetYaxis()->SetLabelFont(42);
   st_stack_69->GetYaxis()->SetTitleSize(0.037);
   st_stack_69->GetYaxis()->SetTitleFont(42);
   st_stack_69->GetZaxis()->SetLabelFont(42);
   st_stack_69->GetZaxis()->SetTitleOffset(1);
   st_stack_69->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_69);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.0844114);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.432803);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.4905496);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.267524);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.08681188);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.04796754);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.03141076);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.02748765);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.01903211);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01420912);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.001577717);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.001563217);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.01145327);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.0260636);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.02796693);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.02040133);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.01170231);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.008610686);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.006856582);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.006530807);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.00549852);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.004742148);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.001577717);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.001563217);
   VbbHcc_algo_H_pt_stack_1->SetEntries(1091);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.01033538);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.0560424);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.1275755);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.1030922);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.04703053);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.0228273);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.01347254);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.006515256);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.006541524);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.00363873);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.002355728);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.0007799116);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.000782153);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,0.0005741003);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,0.0001907175);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,0.0002057899);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,0.0001915038);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(20,0.0004021715);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(22,0.0001099566);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(23,0.0001953535);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(24,0.0001737629);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(25,0.0002012167);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(27,0.0002057899);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.00140766);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.003273289);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.004938825);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.004434515);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.002983728);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.00205181);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.001580361);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.001111579);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001116489);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0008216946);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.000658169);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.0003909485);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0003814965);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,0.0003331755);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,0.0001907175);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,0.0002057899);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.0001915038);
   VbbHcc_algo_H_pt_stack_2->SetBinError(20,0.0002849024);
   VbbHcc_algo_H_pt_stack_2->SetBinError(22,0.0001099566);
   VbbHcc_algo_H_pt_stack_2->SetBinError(23,0.0001953535);
   VbbHcc_algo_H_pt_stack_2->SetBinError(24,0.0001737629);
   VbbHcc_algo_H_pt_stack_2->SetBinError(25,0.0002012167);
   VbbHcc_algo_H_pt_stack_2->SetBinError(27,0.0002057899);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_16->Modified();
   H_pt_algo_16->cd();
   H_pt_algo_16->SetSelected(H_pt_algo_16);
}
