#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_16()
{
//=========Macro generated from canvas: H_pt_seljet_16/H_pt_seljet_16
//=========  (Thu Feb 16 10:35:22 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_16 = new TCanvas("H_pt_seljet_16", "H_pt_seljet_16",0,0,600,600);
   H_pt_seljet_16->SetHighLightColor(2);
   H_pt_seljet_16->Range(37.97653,-7.695386,1705.96,56.43283);
   H_pt_seljet_16->SetFillColor(0);
   H_pt_seljet_16->SetFillStyle(4000);
   H_pt_seljet_16->SetBorderMode(0);
   H_pt_seljet_16->SetBorderSize(2);
   H_pt_seljet_16->SetLeftMargin(0.15709);
   H_pt_seljet_16->SetRightMargin(0.1234783);
   H_pt_seljet_16->SetBottomMargin(0.12);
   H_pt_seljet_16->SetFrameFillStyle(1000);
   H_pt_seljet_16->SetFrameBorderMode(0);
   H_pt_seljet_16->SetFrameFillStyle(1000);
   H_pt_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(50.02001);
   
   TH1F *st_stack_269 = new TH1F("st_stack_269","",40,0,2000);
   st_stack_269->SetMinimum(0);
   st_stack_269->SetMaximum(50.02001);
   st_stack_269->SetDirectory(0);
   st_stack_269->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_269->SetLineColor(ci);
   st_stack_269->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_269->GetXaxis()->SetRange(7,30);
   st_stack_269->GetXaxis()->SetLabelFont(42);
   st_stack_269->GetXaxis()->SetTitleOffset(1);
   st_stack_269->GetXaxis()->SetTitleFont(42);
   st_stack_269->GetYaxis()->SetTitle("Events/50.0");
   st_stack_269->GetYaxis()->SetLabelFont(42);
   st_stack_269->GetYaxis()->SetTitleSize(0.037);
   st_stack_269->GetYaxis()->SetTitleFont(42);
   st_stack_269->GetZaxis()->SetLabelFont(42);
   st_stack_269->GetZaxis()->SetTitleOffset(1);
   st_stack_269->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_269);
   
   
   TH1D *VbbHcc_seljet_H_pt_stack_1 = new TH1D("VbbHcc_seljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,24.25594);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,33.34667);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,19.174);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,8.346472);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,3.558031);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,1.402202);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,0.754821);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.355161);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.1867197);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.08829871);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.04672735);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.02887294);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.01226594);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.009161715);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.002248697);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(16,0.005801072);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(18,0.002814972);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.2711124);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.3175162);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.2389282);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.1567426);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.1017867);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.06413697);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.04678642);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.03187743);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.02300206);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.01597889);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.0111482);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.008861508);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.006143501);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.005292486);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.002248697);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(16,0.004102141);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(18,0.002814972);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(32424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_stack_2 = new TH1D("VbbHcc_seljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,7.696679);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,11.57506);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,7.963754);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,4.275082);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,2.084647);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,0.8780488);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,0.4136408);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.1828813);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.08421911);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.03391277);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.0180418);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.006882584);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.005911895);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.0008142203);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.0002572759);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.0007016676);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(17,0.0006524614);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(19,0.0003799206);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.05440577);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.06669295);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.05522282);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.04033136);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.02806772);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.01811356);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.01241104);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.008178986);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.005573802);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.003499126);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.002612714);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.001597427);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.001460227);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.000576773);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.0002572759);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.0004994172);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(17,0.0004718495);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(19,0.0003799206);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(93749);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_seljet_16->Modified();
   H_pt_seljet_16->cd();
   H_pt_seljet_16->SetSelected(H_pt_seljet_16);
}
