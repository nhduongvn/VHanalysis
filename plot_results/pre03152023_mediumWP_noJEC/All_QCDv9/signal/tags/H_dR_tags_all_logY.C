#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-0.1941637,7.264125,0.6200248);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLogy();
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
   st->SetMinimum(1);
   st->SetMaximum(3.143527);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0.8008273);
   st_stack_24->SetMaximum(3.456256);
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
   st_stack_24->GetYaxis()->SetTitle("Event/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,0.497789);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1.09456);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,1.446599);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,1.834265);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,1.720785);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,1.428324);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,1.242959);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,0.9527549);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,0.9250471);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,0.9230284);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,0.9502711);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1.157163);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1.191385);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,1.266854);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,0.4821811);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,0.2530474);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,0.1678148);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,0.09050081);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,0.04870015);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,0.04867779);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,0.03584066);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,0.01149028);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,0.01231653);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,0.002891781);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,0.03566265);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,0.05596817);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,0.06081917);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,0.08099054);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,0.06611435);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,0.06560971);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,0.05594812);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,0.04879423);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,0.04744469);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,0.04844295);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,0.0488949);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,0.05649062);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,0.05519659);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,0.05877842);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,0.03418739);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,0.02496264);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,0.02035282);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,0.01452834);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,0.01025246);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,0.01068717);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,0.009665918);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,0.004914682);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,0.005406964);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,0.002891781);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(8003);

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
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,0.1772724);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,0.369257);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,0.5770964);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,0.7748624);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,0.8292449);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,0.7171473);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,0.5375463);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,0.4288456);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,0.3655214);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,0.3887119);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,0.4033307);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,0.4303259);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,0.4844591);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,0.4906475);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,0.2354226);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,0.1403922);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,0.09169795);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,0.05396406);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,0.04442509);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,0.02111689);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,0.01288338);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,0.007310195);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,0.008021542);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,0.003845038);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,0.001628119);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,0.0004374943);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,0.007522035);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,0.0110165);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,0.013606);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,0.01726275);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,0.01710197);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,0.01516903);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,0.01320214);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,0.0120279);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,0.01088721);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,0.0112246);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,0.01140712);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,0.01179283);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,0.01270218);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,0.01300645);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,0.009389324);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,0.007231471);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,0.005431838);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,0.004138341);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,0.003852929);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,0.002597489);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,0.002070816);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,0.001458545);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,0.001644215);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,0.001137573);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,0.000745666);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,0.0004374943);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(25459);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
