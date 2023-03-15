#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18_logY()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Fri Mar 10 11:27:12 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,-0.467577,1705.96,1.612399);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetFillStyle(4000);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLogy();
   Z_pt_tags_18->SetLeftMargin(0.15709);
   Z_pt_tags_18->SetRightMargin(0.1234783);
   Z_pt_tags_18->SetBottomMargin(0.12);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(20.12662);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0.6053689);
   st_stack_11->SetMaximum(25.37472);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,8.857454);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,16.41911);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,16.70509);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,9.818283);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,5.500694);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,3.164719);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,1.886221);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,1.1482);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.5921512);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.3131969);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.1380016);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.102605);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.05374427);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.05607902);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.02702478);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.01864456);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.02127148);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.005008346);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(19,0.005084677);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(20,0.005799195);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(24,0.00585478);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(25,0.002840873);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.1651337);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.2186783);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.2414625);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.1776224);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.1260666);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.09501459);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.07596805);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.0649442);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.0479421);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.02881231);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.01890188);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.01651034);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.0117502);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.01217245);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.008644625);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.007113527);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.008859488);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.003547449);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(19,0.003598642);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(20,0.004101491);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(24,0.004177508);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(25,0.002840873);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(25720);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,2.52033);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,5.002018);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,6.492014);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,4.955459);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,2.969798);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,1.600848);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.8419218);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.4469802);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.1991551);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.1052338);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.05316749);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.02636896);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.009933358);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.008241519);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.00264298);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0021733);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.001217825);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,0.0007615833);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.001318812);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(20,0.0007414566);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0005992971);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(22,0.0006406241);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.03084928);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.04345178);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.05103833);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.04337369);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.03316295);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.02463177);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.01813274);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.01287789);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.008325896);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.006110236);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.00434811);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.003013148);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.001991256);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.001654264);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.001019439);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0008529066);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0006123888);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,0.0005444584);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0006597815);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(20,0.0005311609);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0004264504);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(22,0.0004529954);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(74786);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
