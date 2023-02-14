#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17_logY()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Tue Feb 14 10:43:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,0.09609591,7.264125,4.446884);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLogy();
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6571.988);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",30,0,6);
   st_stack_278->SetMinimum(4.151361);
   st_stack_278->SetMaximum(10275.56);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_278->GetXaxis()->SetRange(1,31);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetTitleOffset(1);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Events/0.2");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetTitleOffset(1);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.001753361);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.18142);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.147958);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.958628);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,3.816518);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,4.861484);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,6.301973);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,8.291029);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,11.46006);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,15.29255);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,20.43119);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,27.25396);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,36.2276);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,46.84455);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,51.72351);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,17.75659);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,7.689459);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,3.712166);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,2.121603);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.331924);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.8691617);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.4576847);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.276465);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1413945);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.08886712);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.02918427);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.008548456);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,0.001227691);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.001753361);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.04646346);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.06326844);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.07428186);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.08412169);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.09537558);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.1091636);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.1248651);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.1470933);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.1700208);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.1971608);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.2270181);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.261723);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.2981857);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.3134493);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.183159);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1196268);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.0827299);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.06213385);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.04915822);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.0395312);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.02848163);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.02219342);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01569561);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.0124239);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.006866264);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.003877073);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,0.001227691);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(158880);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,0.0002645912);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.3065735);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.7089139);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.9871679);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,1.113291);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,1.132076);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1.183697);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.371091);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.860227);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,2.802602);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,4.430757);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,6.79502);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,9.558921);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,12.80135);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,13.99636);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,5.992142);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,2.956991);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,1.609703);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.9592375);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.5530264);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.3469469);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.2036462);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.1147866);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.05533394);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.02941373);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.01070696);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.002498639);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,0.0002390456);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,0.0002645912);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.008390166);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01286781);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.01527931);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01629074);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01648671);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01683809);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.01813926);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.02112321);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.0259754);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.03266911);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.04052322);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.04808975);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.0556563);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.05823789);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.03802829);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.02667318);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.01959647);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01504897);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01143645);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.008984712);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.006866637);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.005122301);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.003524955);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.002528772);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.001520412);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.0007334149);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,0.0002390456);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(311458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}
