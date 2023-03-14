#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Mar  9 13:09:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.3830049,7.029799,2.808703);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.489532);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(0);
   st_stack_108->SetMaximum(2.489532);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_108->GetXaxis()->SetRange(1,30);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Event/0.2");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.4559147);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1.529325);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1.241448);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,0.7054611);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.2652211);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.1211709);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.04761614);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.02429083);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.01314829);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.01676804);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.0158833);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.03127621);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.05718922);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.0515514);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.03924464);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.0239923);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.01586114);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.009707312);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.007144284);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.005052331);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.005729015);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.005745112);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.1040479);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.5369859);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.4719319);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.2238019);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.07122155);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.03523946);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.01789123);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.0114826);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.005418615);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.005221948);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.002709476);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.001613838);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.001371791);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.0008645283);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.0008069192);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,0.0005072625);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.005457848);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.01226184);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.01151448);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.007957375);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.004442778);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.00317707);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.002252358);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.001744266);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.001215207);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.001221788);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.0008358961);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.0006673657);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.000627238);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.0005104245);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.0004718988);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,0.0003645467);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
